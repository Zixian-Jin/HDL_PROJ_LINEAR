#!/usr/bin/env python3

# This script tests the fixed point linear
import os, math, logging
import sys, glob

sys.path.append('/home/zixian/mase-tools/machop')
# sys.path.append('/home/HDL_PROJ_LINEAR/top/hardware/test')
###############################################
from mase_cocotb.random_test import *
from mase_cocotb.utils import printMat

import cocotb
from cocotb.runner import get_runner
from cocotb.triggers import Timer
from cocotb.triggers import FallingEdge
from cocotb.clock import Clock
import copy
debug = True

logger = logging.getLogger("tb_signals")
if debug:
    logger.setLevel(logging.DEBUG)

X_DIM = 20
FC1_DIM = 10
FC1_DEPTH = 5

MLP_PARAMS = {
    # ########### fc1 ###########
    # "fc1_DATA_IN_0_TENSOR_SIZE_DIM_0": 1,
    # "fc1_DATA_IN_0_TENSOR_SIZE_DIM_1": X_DIM,
    # "fc1_DATA_IN_0_PARALLELISM_DIM_0": 1,
    # "fc1_DATA_IN_0_PARALLELISM_DIM_1": int(X_DIM/FC1_DEPTH),
    # "fc1_WEIGHT_TENSOR_SIZE_DIM_0": X_DIM,
    # "fc1_WEIGHT_TENSOR_SIZE_DIM_1": FC1_DIM,
    # "fc1_WEIGHT_PARALLELISM_DIM_0": int(X_DIM/FC1_DEPTH),
    # "fc1_WEIGHT_PARALLELISM_DIM_1": FC1_DIM,
    # "fc1_BIAS_TENSOR_SIZE_DIM_0": FC1_DIM,
    # "fc1_BIAS_PARALLELISM_DIM_0": FC1_DIM,  
    # # TENSOR_SIZE inactivated for DATA_OUT_0
    # "fc1_DATA_OUT_0_PARALLELISM_DIM_0": 1,
    # "fc1_DATA_OUT_0_PARALLELISM_DIM_1": FC1_DIM,
}

# DUT test specifications
class VerificationCase:
    def __init__(self, samples=10):
        self.data_in_width = 32
        self.data_in_frac_width = 0
        self.data_in_rows = 3 # should be 25
        self.data_in_cols = 1
        
        self.data_out_width = 32
        self.data_out_frac_width = 0
        
        self.iterations = 5  # not used for simple_matmul
        
        # self.has_bias = 1

        # self.x_rows = 4
        # self.x_columns = 15
        # self.y_rows = self.x_columns
        # assert self.iterations == 1, "DEPTH is always 1 for simple_matmul!"
        # self.x_row_sparsity = 0.8  # sparsity in each row of x
        # self.x_row_sparse_size = int(self.x_row_sparsity * self.x_columns)
        # self.x_row_dense_size = self.x_columns - self.x_row_sparse_size

        # Alghouth the compressed_simple_matmul module utilizes element-wise
        # instead of block-wise sparsity, we still keep the block-wise sparse generator syntax
        # as far as code consistency is concerned.  
        self.inputs = RandomSource(
            name="x",
            samples=samples * self.iterations,
            num=self.data_in_rows * self.data_in_cols,
            # dim0 = self.data_in_rows,
            # dim1 = self.data_in_cols,
            max_stalls=0,
            debug=debug,
            
            # sparsity-related configs
            # block_num = self.x_columns,  # granularity=1, element-wise sparsity
            # block_size=1,
            # sparse_block_num=self.x_row_sparse_size,
            # compression="COO"
        )
        self.outputs = RandomSink(samples=samples, max_stalls=0, debug=debug)
        self.samples = samples
        # self.ref = self.sw_compute()
        # self.ref = self.sw_cast(
        #     inputs=self.ref,
        #     in_width=self.x_width
        #     + self.y_width
        #     + math.ceil(math.log2(self.iterations * self.x_columns)),
        #     # + self.has_bias,
        #     in_frac_width=self.x_frac_width + self.y_frac_width,
        #     out_width=self.data_out_width,
        #     out_frac_width=self.data_out_frac_width,
        # )

    def get_dut_parameters(self):
        return {''}

        #     return {
        #         "X_WIDTH": self.x_width,
        #         "X_FRAC_WIDTH": self.x_frac_width,
        #         "Y_WIDTH": self.y_width,
        #         "Y_FRAC_WIDTH": self.y_frac_width,
        #         # "BIAS_WIDTH": self.bias_width,
        #         # "BIAS_FRAC_WIDTH": self.bias_frac_width,
        #         # "HAS_BIAS": self.has_bias,
        #         "OUT_WIDTH": self.data_out_width,
        #         "OUT_FRAC_WIDTH": self.data_out_frac_width,
        #         "N": self.x_rows,
        #         "M": self.x_columns,
        #         "K": self.y_columns,
        #         "NZN": self.x_row_dense_size*self.x_rows,  # total dense elements in x
        #         "NZN_ROW": self.x_row_dense_size
        #         # "IN_DEPTH": self.iterations,
        #     }

    def sw_compute(self):
        final = []
        ref = []
        
        # convert X from COO compressed format to sparse format
        x_sparse = []
        for i in range(self.samples):
            sparse_row = self.x.COO2Sparse(self.x.data[i], self.x.row[i], self.x.col[i], self.x_rows, self.x_columns)
            x_sparse.append(sparse_row)
            
        printMat(x_sparse[0], self.x_rows, self.x_columns)
        global sparse_mat_x, sparse_mat_y
        sparse_mat_x = copy.deepcopy(x_sparse[-1])
        sparse_mat_y = copy.deepcopy(self.y.data[-1])
        for id in range(self.samples):
            acc = [0 for _ in range(self.x_rows * self.y_columns)]
            for w in range(self.x_rows):
                current_row = [x_sparse[id][w*self.x_columns + i] for i in range(self.x_columns)]
                for k in range(self.y_columns):
                    current_col = [self.y.data[id][j*self.y_columns + k] for j in range(self.y_rows)]
                    s = [current_row[h]*current_col[h] for h in range(self.x_columns)]
                    acc[w * self.y_columns + k] += sum(s)
            # if self.has_bias:
            #     for j in range(self.x_rows * self.y_columns):
            #         acc[j] += self.bias.data[i][j] << (
            #             self.y_frac_width
            #             + self.x_frac_width
            #             - self.bias_frac_width
            #         )
            ref.append(acc)
        ref.reverse()
        return ref

    def sw_cast(self, inputs, in_width, in_frac_width, out_width, out_frac_width):
        outputs = []
        for j in range(len(inputs)):
            in_list = inputs[j]
            out_list = []
            for i in range(0, len(in_list)):
                in_value = in_list[i]
                if in_frac_width > out_frac_width:
                    in_value = in_value >> (in_frac_width - out_frac_width)
                else:
                    in_value = in_value << (out_frac_width - in_frac_width)
                in_int_width = in_width - in_frac_width
                out_int_width = out_width - out_frac_width
                if in_int_width > out_int_width:
                    if in_value >> (in_frac_width + out_int_width) > 0:
                        in_value = 1 << out_width - 1
                    elif in_value >> (in_frac_width + out_int_width) < 0:
                        in_value = -(1 << out_width - 1)
                    else:
                        in_value = int(in_value % (1 << out_width))
                out_list.append(in_value)
            outputs.append(out_list)
        return outputs


def debug_state(dut, state):
    logger.debug(
        "{} State: (clk, rst) = ({},{})".format(
            state,
            dut.clk.value,
            dut.rst.value,
        )
    )
    pass


@cocotb.test()
async def test_fixed_linear_sync_top(dut):
    """Test integer based vector mult"""
    samples = 100
    test_case = VerificationCase(samples=samples)

    # Reset cycle
    await Timer(20, units="ns")
    dut.rst.value = 1
    await Timer(100, units="ns")
    dut.rst.value = 0

    # Create a 10ns-period clock on port clk
    clock = Clock(dut.clk, 10, units="ns")
    # Start the clock
    cocotb.start_soon(clock.start())
    await Timer(500, units="ns")

    # Synchronize with the clock
    # dut.data_in_0_valid.value = 0
    # dut.data_out_0_ready.value = 1
    debug_state(dut, "Pre-clk")
    await FallingEdge(dut.clk)
    debug_state(dut, "Post-clk")
    debug_state(dut, "Pre-clk")
    await FallingEdge(dut.clk)
    debug_state(dut, "Post-clk")

    done = False
    # Set a timeout to avoid deadlock
    for i in range(samples * 50):
        await FallingEdge(dut.clk)
        debug_state(dut, "Post-clk")
        # dut.bias_valid.value = test_case.bias.pre_compute()
        # dut.data_in_0_valid.value = test_case.inputs.pre_compute()
        # await Timer(1, units="ns")
        # dut.data_out_0_ready.value = test_case.outputs.pre_compute(
        #     dut.data_out_0_valid.value
        # )
        debug_state(dut, "Pre-clk")
        await Timer(1, units="ns")
        debug_state(dut, "Post-clk")
        # dut.bias_valid.value, dut.bias.value = test_case.bias.compute(
        #     dut.bias_ready.value
        # )
        # dut.data_in_0_valid.value, dut.data_in_0.value = test_case.inputs.compute(
        #     dut.data_in_0_ready.value
        # )
        await Timer(1, units="ns")
        # dut.data_out_0_ready.value = test_case.outputs.compute(
        #     dut.data_out_0_valid.value, dut.data_out_0.value
        # )
        # breakpoint()
        debug_state(dut, "Pre-clk")
        if (
            test_case.inputs.is_empty()
            and test_case.outputs.is_full()
        ):
            done = True
            break
    assert (
        done
    ), "Deadlock detected or the simulation reaches the maximum cycle limit (fixed it by adjusting the loop trip count)"


def runner(project_dir, top_name):
    sim = os.getenv("SIM", "verilator")

    # TODO: Grab internal verilog source only. Need to include HLS hardware as well.
    sv_srcs = []
    for v in glob.glob(os.path.join(project_dir, "*.sv")):
        sv_srcs.append(os.path.relpath(v, os.getcwd()))
    print(sv_srcs)
    p = MLP_PARAMS
    # p = {}
    # logger.debug(p)

    # set parameters
    extra_args = ['--trace']
    for k, v in p.items():
        extra_args.append(f"-G{k}={v}")
    logger.debug(extra_args)
    runner = get_runner(sim)
    runner.build(
        verilog_sources=sv_srcs,
        hdl_toplevel=top_name,
        build_args=extra_args,
    )
    runner.test(
        hdl_toplevel=top_name,
        # test_module=top_name + "_tb",
        test_module='fixed_linear_sync_top_tb',
        # seed=seed,
        results_xml="results.xml",
    )
if __name__ == "__main__":
    tb = VerificationCase()
    project_dir = '/home/zixian/HDL_PROJ_LINEAR/top/hardware/rtl/fixed_linear_sync_test'
    top_name = 'fixed_linear_sync_top'
    runner(project_dir, top_name)