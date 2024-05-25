
// =====================================
//     Mase Hardware (Memory Map)
//     Model: top
//     25/05/2024 11:30:43
// =====================================
`timescale 1ns/1ps
module top #(
    parameter fc1_DATA_IN_0_PRECISION_0 = 8,
    parameter fc1_DATA_IN_0_PRECISION_1 = 3,
    parameter fc1_DATA_IN_0_TENSOR_SIZE_DIM_0 = 25,
    parameter fc1_DATA_IN_0_PARALLELISM_DIM_0 = 1,
    parameter fc1_DATA_IN_0_TENSOR_SIZE_DIM_1 = 1,
    parameter fc1_DATA_IN_0_PARALLELISM_DIM_1 = 1,
    parameter fc1_WEIGHT_PRECISION_0 = 8,
    parameter fc1_WEIGHT_PRECISION_1 = 3,
    parameter fc1_WEIGHT_TENSOR_SIZE_DIM_0 = 25,
    parameter fc1_WEIGHT_PARALLELISM_DIM_0 = 1,
    parameter fc1_WEIGHT_TENSOR_SIZE_DIM_1 = 25,
    parameter fc1_WEIGHT_PARALLELISM_DIM_1 = 1,
    parameter fc1_BIAS_PRECISION_0 = 8,
    parameter fc1_BIAS_PRECISION_1 = 3,
    parameter fc1_BIAS_TENSOR_SIZE_DIM_0 = 25,
    parameter fc1_BIAS_PARALLELISM_DIM_0 = 1,
    parameter fc1_DATA_OUT_0_PRECISION_0 = 4,
    parameter fc1_DATA_OUT_0_PRECISION_1 = 2,
    parameter fc1_DATA_OUT_0_TENSOR_SIZE_DIM_0 = 25,
    parameter fc1_DATA_OUT_0_PARALLELISM_DIM_0 = 1,
    parameter fc1_DATA_OUT_0_TENSOR_SIZE_DIM_1 = 1,
    parameter fc1_DATA_OUT_0_PARALLELISM_DIM_1 = 1,
    parameter relu_DATA_IN_0_PRECISION_0 = 4,
    parameter relu_DATA_IN_0_PRECISION_1 = 2,
    parameter relu_DATA_IN_0_TENSOR_SIZE_DIM_0 = 25,
    parameter relu_DATA_IN_0_PARALLELISM_DIM_0 = 1,
    parameter relu_DATA_IN_0_TENSOR_SIZE_DIM_1 = 1,
    parameter relu_DATA_IN_0_PARALLELISM_DIM_1 = 1,
    parameter relu_INPLACE = 0,
    parameter relu_DATA_OUT_0_PRECISION_0 = 8,
    parameter relu_DATA_OUT_0_PRECISION_1 = 3,
    parameter relu_DATA_OUT_0_TENSOR_SIZE_DIM_0 = 25,
    parameter relu_DATA_OUT_0_PARALLELISM_DIM_0 = 1,
    parameter relu_DATA_OUT_0_TENSOR_SIZE_DIM_1 = 1,
    parameter relu_DATA_OUT_0_PARALLELISM_DIM_1 = 1,
    parameter fc2_DATA_IN_0_PRECISION_0 = 8,
    parameter fc2_DATA_IN_0_PRECISION_1 = 3,
    parameter fc2_DATA_IN_0_TENSOR_SIZE_DIM_0 = 25,
    parameter fc2_DATA_IN_0_PARALLELISM_DIM_0 = 1,
    parameter fc2_DATA_IN_0_TENSOR_SIZE_DIM_1 = 1,
    parameter fc2_DATA_IN_0_PARALLELISM_DIM_1 = 1,
    parameter fc2_WEIGHT_PRECISION_0 = 8,
    parameter fc2_WEIGHT_PRECISION_1 = 3,
    parameter fc2_WEIGHT_TENSOR_SIZE_DIM_0 = 25,
    parameter fc2_WEIGHT_PARALLELISM_DIM_0 = 1,
    parameter fc2_WEIGHT_TENSOR_SIZE_DIM_1 = 100,
    parameter fc2_WEIGHT_PARALLELISM_DIM_1 = 1,
    parameter fc2_BIAS_PRECISION_0 = 8,
    parameter fc2_BIAS_PRECISION_1 = 3,
    parameter fc2_BIAS_TENSOR_SIZE_DIM_0 = 100,
    parameter fc2_BIAS_PARALLELISM_DIM_0 = 1,
    parameter fc2_DATA_OUT_0_PRECISION_0 = 4,
    parameter fc2_DATA_OUT_0_PRECISION_1 = 2,
    parameter fc2_DATA_OUT_0_TENSOR_SIZE_DIM_0 = 100,
    parameter fc2_DATA_OUT_0_PARALLELISM_DIM_0 = 1,
    parameter fc2_DATA_OUT_0_TENSOR_SIZE_DIM_1 = 1,
    parameter fc2_DATA_OUT_0_PARALLELISM_DIM_1 = 1,
    parameter relu_1_DATA_IN_0_PRECISION_0 = 4,
    parameter relu_1_DATA_IN_0_PRECISION_1 = 2,
    parameter relu_1_DATA_IN_0_TENSOR_SIZE_DIM_0 = 100,
    parameter relu_1_DATA_IN_0_PARALLELISM_DIM_0 = 1,
    parameter relu_1_DATA_IN_0_TENSOR_SIZE_DIM_1 = 1,
    parameter relu_1_DATA_IN_0_PARALLELISM_DIM_1 = 1,
    parameter relu_1_INPLACE = 0,
    parameter relu_1_DATA_OUT_0_PRECISION_0 = 8,
    parameter relu_1_DATA_OUT_0_PRECISION_1 = 3,
    parameter relu_1_DATA_OUT_0_TENSOR_SIZE_DIM_0 = 100,
    parameter relu_1_DATA_OUT_0_PARALLELISM_DIM_0 = 1,
    parameter relu_1_DATA_OUT_0_TENSOR_SIZE_DIM_1 = 1,
    parameter relu_1_DATA_OUT_0_PARALLELISM_DIM_1 = 1,
    parameter fc3_DATA_IN_0_PRECISION_0 = 8,
    parameter fc3_DATA_IN_0_PRECISION_1 = 3,
    parameter fc3_DATA_IN_0_TENSOR_SIZE_DIM_0 = 100,
    parameter fc3_DATA_IN_0_PARALLELISM_DIM_0 = 1,
    parameter fc3_DATA_IN_0_TENSOR_SIZE_DIM_1 = 1,
    parameter fc3_DATA_IN_0_PARALLELISM_DIM_1 = 1,
    parameter fc3_WEIGHT_PRECISION_0 = 8,
    parameter fc3_WEIGHT_PRECISION_1 = 3,
    parameter fc3_WEIGHT_TENSOR_SIZE_DIM_0 = 100,
    parameter fc3_WEIGHT_PARALLELISM_DIM_0 = 1,
    parameter fc3_WEIGHT_TENSOR_SIZE_DIM_1 = 10,
    parameter fc3_WEIGHT_PARALLELISM_DIM_1 = 1,
    parameter fc3_BIAS_PRECISION_0 = 8,
    parameter fc3_BIAS_PRECISION_1 = 3,
    parameter fc3_BIAS_TENSOR_SIZE_DIM_0 = 10,
    parameter fc3_BIAS_PARALLELISM_DIM_0 = 1,
    parameter fc3_DATA_OUT_0_PRECISION_0 = 8,
    parameter fc3_DATA_OUT_0_PRECISION_1 = 3,
    parameter fc3_DATA_OUT_0_TENSOR_SIZE_DIM_0 = 10,
    parameter fc3_DATA_OUT_0_PARALLELISM_DIM_0 = 1,
    parameter fc3_DATA_OUT_0_TENSOR_SIZE_DIM_1 = 1,
    parameter fc3_DATA_OUT_0_PARALLELISM_DIM_1 = 1
) (
    input clk,
    input rst,

    input  [fc1_DATA_IN_0_PRECISION_0-1:0] data_in_0 [fc1_DATA_IN_0_PARALLELISM_DIM_0*fc1_DATA_IN_0_PARALLELISM_DIM_1-1:0],
    input  data_in_0_valid,
    output data_in_0_ready,
    output  [fc3_DATA_OUT_0_PRECISION_0-1:0] data_out_0 [fc3_DATA_OUT_0_PARALLELISM_DIM_0*fc3_DATA_OUT_0_PARALLELISM_DIM_1-1:0],
    output  data_out_0_valid,
    input data_out_0_ready
);

logic [fc1_WEIGHT_PRECISION_0-1:0]  fc1_weight        [fc1_WEIGHT_PARALLELISM_DIM_0*fc1_WEIGHT_PARALLELISM_DIM_1-1:0];
logic                             fc1_weight_valid;
logic                             fc1_weight_ready;
logic [fc1_BIAS_PRECISION_0-1:0]  fc1_bias        [fc1_BIAS_PARALLELISM_DIM_0-1:0];
logic                             fc1_bias_valid;
logic                             fc1_bias_ready;
logic [fc2_WEIGHT_PRECISION_0-1:0]  fc2_weight        [fc2_WEIGHT_PARALLELISM_DIM_0*fc2_WEIGHT_PARALLELISM_DIM_1-1:0];
logic                             fc2_weight_valid;
logic                             fc2_weight_ready;
logic [fc2_BIAS_PRECISION_0-1:0]  fc2_bias        [fc2_BIAS_PARALLELISM_DIM_0-1:0];
logic                             fc2_bias_valid;
logic                             fc2_bias_ready;
logic [fc3_WEIGHT_PRECISION_0-1:0]  fc3_weight        [fc3_WEIGHT_PARALLELISM_DIM_0*fc3_WEIGHT_PARALLELISM_DIM_1-1:0];
logic                             fc3_weight_valid;
logic                             fc3_weight_ready;
logic [fc3_BIAS_PRECISION_0-1:0]  fc3_bias        [fc3_BIAS_PARALLELISM_DIM_0-1:0];
logic                             fc3_bias_valid;
logic                             fc3_bias_ready;

// --------------------------
//   Component instantiation
// --------------------------
top_dataflow #(    .fc1_DATA_IN_0_PRECISION_0(fc1_DATA_IN_0_PRECISION_0),
    .fc1_DATA_IN_0_PRECISION_1(fc1_DATA_IN_0_PRECISION_1),
    .fc1_DATA_IN_0_TENSOR_SIZE_DIM_0(fc1_DATA_IN_0_TENSOR_SIZE_DIM_0),
    .fc1_DATA_IN_0_PARALLELISM_DIM_0(fc1_DATA_IN_0_PARALLELISM_DIM_0),
    .fc1_DATA_IN_0_TENSOR_SIZE_DIM_1(fc1_DATA_IN_0_TENSOR_SIZE_DIM_1),
    .fc1_DATA_IN_0_PARALLELISM_DIM_1(fc1_DATA_IN_0_PARALLELISM_DIM_1),
    .fc1_WEIGHT_PRECISION_0(fc1_WEIGHT_PRECISION_0),
    .fc1_WEIGHT_PRECISION_1(fc1_WEIGHT_PRECISION_1),
    .fc1_WEIGHT_TENSOR_SIZE_DIM_0(fc1_WEIGHT_TENSOR_SIZE_DIM_0),
    .fc1_WEIGHT_PARALLELISM_DIM_0(fc1_WEIGHT_PARALLELISM_DIM_0),
    .fc1_WEIGHT_TENSOR_SIZE_DIM_1(fc1_WEIGHT_TENSOR_SIZE_DIM_1),
    .fc1_WEIGHT_PARALLELISM_DIM_1(fc1_WEIGHT_PARALLELISM_DIM_1),
    .fc1_BIAS_PRECISION_0(fc1_BIAS_PRECISION_0),
    .fc1_BIAS_PRECISION_1(fc1_BIAS_PRECISION_1),
    .fc1_BIAS_TENSOR_SIZE_DIM_0(fc1_BIAS_TENSOR_SIZE_DIM_0),
    .fc1_BIAS_PARALLELISM_DIM_0(fc1_BIAS_PARALLELISM_DIM_0),
    .fc1_DATA_OUT_0_PRECISION_0(fc1_DATA_OUT_0_PRECISION_0),
    .fc1_DATA_OUT_0_PRECISION_1(fc1_DATA_OUT_0_PRECISION_1),
    .fc1_DATA_OUT_0_TENSOR_SIZE_DIM_0(fc1_DATA_OUT_0_TENSOR_SIZE_DIM_0),
    .fc1_DATA_OUT_0_PARALLELISM_DIM_0(fc1_DATA_OUT_0_PARALLELISM_DIM_0),
    .fc1_DATA_OUT_0_TENSOR_SIZE_DIM_1(fc1_DATA_OUT_0_TENSOR_SIZE_DIM_1),
    .fc1_DATA_OUT_0_PARALLELISM_DIM_1(fc1_DATA_OUT_0_PARALLELISM_DIM_1),
    .relu_DATA_IN_0_PRECISION_0(relu_DATA_IN_0_PRECISION_0),
    .relu_DATA_IN_0_PRECISION_1(relu_DATA_IN_0_PRECISION_1),
    .relu_DATA_IN_0_TENSOR_SIZE_DIM_0(relu_DATA_IN_0_TENSOR_SIZE_DIM_0),
    .relu_DATA_IN_0_PARALLELISM_DIM_0(relu_DATA_IN_0_PARALLELISM_DIM_0),
    .relu_DATA_IN_0_TENSOR_SIZE_DIM_1(relu_DATA_IN_0_TENSOR_SIZE_DIM_1),
    .relu_DATA_IN_0_PARALLELISM_DIM_1(relu_DATA_IN_0_PARALLELISM_DIM_1),
    .relu_INPLACE(relu_INPLACE),
    .relu_DATA_OUT_0_PRECISION_0(relu_DATA_OUT_0_PRECISION_0),
    .relu_DATA_OUT_0_PRECISION_1(relu_DATA_OUT_0_PRECISION_1),
    .relu_DATA_OUT_0_TENSOR_SIZE_DIM_0(relu_DATA_OUT_0_TENSOR_SIZE_DIM_0),
    .relu_DATA_OUT_0_PARALLELISM_DIM_0(relu_DATA_OUT_0_PARALLELISM_DIM_0),
    .relu_DATA_OUT_0_TENSOR_SIZE_DIM_1(relu_DATA_OUT_0_TENSOR_SIZE_DIM_1),
    .relu_DATA_OUT_0_PARALLELISM_DIM_1(relu_DATA_OUT_0_PARALLELISM_DIM_1),
    .fc2_DATA_IN_0_PRECISION_0(fc2_DATA_IN_0_PRECISION_0),
    .fc2_DATA_IN_0_PRECISION_1(fc2_DATA_IN_0_PRECISION_1),
    .fc2_DATA_IN_0_TENSOR_SIZE_DIM_0(fc2_DATA_IN_0_TENSOR_SIZE_DIM_0),
    .fc2_DATA_IN_0_PARALLELISM_DIM_0(fc2_DATA_IN_0_PARALLELISM_DIM_0),
    .fc2_DATA_IN_0_TENSOR_SIZE_DIM_1(fc2_DATA_IN_0_TENSOR_SIZE_DIM_1),
    .fc2_DATA_IN_0_PARALLELISM_DIM_1(fc2_DATA_IN_0_PARALLELISM_DIM_1),
    .fc2_WEIGHT_PRECISION_0(fc2_WEIGHT_PRECISION_0),
    .fc2_WEIGHT_PRECISION_1(fc2_WEIGHT_PRECISION_1),
    .fc2_WEIGHT_TENSOR_SIZE_DIM_0(fc2_WEIGHT_TENSOR_SIZE_DIM_0),
    .fc2_WEIGHT_PARALLELISM_DIM_0(fc2_WEIGHT_PARALLELISM_DIM_0),
    .fc2_WEIGHT_TENSOR_SIZE_DIM_1(fc2_WEIGHT_TENSOR_SIZE_DIM_1),
    .fc2_WEIGHT_PARALLELISM_DIM_1(fc2_WEIGHT_PARALLELISM_DIM_1),
    .fc2_BIAS_PRECISION_0(fc2_BIAS_PRECISION_0),
    .fc2_BIAS_PRECISION_1(fc2_BIAS_PRECISION_1),
    .fc2_BIAS_TENSOR_SIZE_DIM_0(fc2_BIAS_TENSOR_SIZE_DIM_0),
    .fc2_BIAS_PARALLELISM_DIM_0(fc2_BIAS_PARALLELISM_DIM_0),
    .fc2_DATA_OUT_0_PRECISION_0(fc2_DATA_OUT_0_PRECISION_0),
    .fc2_DATA_OUT_0_PRECISION_1(fc2_DATA_OUT_0_PRECISION_1),
    .fc2_DATA_OUT_0_TENSOR_SIZE_DIM_0(fc2_DATA_OUT_0_TENSOR_SIZE_DIM_0),
    .fc2_DATA_OUT_0_PARALLELISM_DIM_0(fc2_DATA_OUT_0_PARALLELISM_DIM_0),
    .fc2_DATA_OUT_0_TENSOR_SIZE_DIM_1(fc2_DATA_OUT_0_TENSOR_SIZE_DIM_1),
    .fc2_DATA_OUT_0_PARALLELISM_DIM_1(fc2_DATA_OUT_0_PARALLELISM_DIM_1),
    .relu_1_DATA_IN_0_PRECISION_0(relu_1_DATA_IN_0_PRECISION_0),
    .relu_1_DATA_IN_0_PRECISION_1(relu_1_DATA_IN_0_PRECISION_1),
    .relu_1_DATA_IN_0_TENSOR_SIZE_DIM_0(relu_1_DATA_IN_0_TENSOR_SIZE_DIM_0),
    .relu_1_DATA_IN_0_PARALLELISM_DIM_0(relu_1_DATA_IN_0_PARALLELISM_DIM_0),
    .relu_1_DATA_IN_0_TENSOR_SIZE_DIM_1(relu_1_DATA_IN_0_TENSOR_SIZE_DIM_1),
    .relu_1_DATA_IN_0_PARALLELISM_DIM_1(relu_1_DATA_IN_0_PARALLELISM_DIM_1),
    .relu_1_INPLACE(relu_1_INPLACE),
    .relu_1_DATA_OUT_0_PRECISION_0(relu_1_DATA_OUT_0_PRECISION_0),
    .relu_1_DATA_OUT_0_PRECISION_1(relu_1_DATA_OUT_0_PRECISION_1),
    .relu_1_DATA_OUT_0_TENSOR_SIZE_DIM_0(relu_1_DATA_OUT_0_TENSOR_SIZE_DIM_0),
    .relu_1_DATA_OUT_0_PARALLELISM_DIM_0(relu_1_DATA_OUT_0_PARALLELISM_DIM_0),
    .relu_1_DATA_OUT_0_TENSOR_SIZE_DIM_1(relu_1_DATA_OUT_0_TENSOR_SIZE_DIM_1),
    .relu_1_DATA_OUT_0_PARALLELISM_DIM_1(relu_1_DATA_OUT_0_PARALLELISM_DIM_1),
    .fc3_DATA_IN_0_PRECISION_0(fc3_DATA_IN_0_PRECISION_0),
    .fc3_DATA_IN_0_PRECISION_1(fc3_DATA_IN_0_PRECISION_1),
    .fc3_DATA_IN_0_TENSOR_SIZE_DIM_0(fc3_DATA_IN_0_TENSOR_SIZE_DIM_0),
    .fc3_DATA_IN_0_PARALLELISM_DIM_0(fc3_DATA_IN_0_PARALLELISM_DIM_0),
    .fc3_DATA_IN_0_TENSOR_SIZE_DIM_1(fc3_DATA_IN_0_TENSOR_SIZE_DIM_1),
    .fc3_DATA_IN_0_PARALLELISM_DIM_1(fc3_DATA_IN_0_PARALLELISM_DIM_1),
    .fc3_WEIGHT_PRECISION_0(fc3_WEIGHT_PRECISION_0),
    .fc3_WEIGHT_PRECISION_1(fc3_WEIGHT_PRECISION_1),
    .fc3_WEIGHT_TENSOR_SIZE_DIM_0(fc3_WEIGHT_TENSOR_SIZE_DIM_0),
    .fc3_WEIGHT_PARALLELISM_DIM_0(fc3_WEIGHT_PARALLELISM_DIM_0),
    .fc3_WEIGHT_TENSOR_SIZE_DIM_1(fc3_WEIGHT_TENSOR_SIZE_DIM_1),
    .fc3_WEIGHT_PARALLELISM_DIM_1(fc3_WEIGHT_PARALLELISM_DIM_1),
    .fc3_BIAS_PRECISION_0(fc3_BIAS_PRECISION_0),
    .fc3_BIAS_PRECISION_1(fc3_BIAS_PRECISION_1),
    .fc3_BIAS_TENSOR_SIZE_DIM_0(fc3_BIAS_TENSOR_SIZE_DIM_0),
    .fc3_BIAS_PARALLELISM_DIM_0(fc3_BIAS_PARALLELISM_DIM_0),
    .fc3_DATA_OUT_0_PRECISION_0(fc3_DATA_OUT_0_PRECISION_0),
    .fc3_DATA_OUT_0_PRECISION_1(fc3_DATA_OUT_0_PRECISION_1),
    .fc3_DATA_OUT_0_TENSOR_SIZE_DIM_0(fc3_DATA_OUT_0_TENSOR_SIZE_DIM_0),
    .fc3_DATA_OUT_0_PARALLELISM_DIM_0(fc3_DATA_OUT_0_PARALLELISM_DIM_0),
    .fc3_DATA_OUT_0_TENSOR_SIZE_DIM_1(fc3_DATA_OUT_0_TENSOR_SIZE_DIM_1),
    .fc3_DATA_OUT_0_PARALLELISM_DIM_1(fc3_DATA_OUT_0_PARALLELISM_DIM_1)
) top_df_inst (
    .clk(clk),
    .rst(rst),

    .data_in_0(data_in_0),
    .data_in_0_valid(data_in_0_valid),
    .data_in_0_ready(data_in_0_ready),
    .data_out_0(data_out_0),
    .data_out_0_valid(data_out_0_valid),
    .data_out_0_ready(data_out_0_ready),
    .fc1_weight(fc1_weight),
    .fc1_weight_valid(fc1_weight_valid),
    .fc1_weight_ready(fc1_weight_ready),
    .fc1_bias(fc1_bias),
    .fc1_bias_valid(fc1_bias_valid),
    .fc1_bias_ready(fc1_bias_ready),
    .fc2_weight(fc2_weight),
    .fc2_weight_valid(fc2_weight_valid),
    .fc2_weight_ready(fc2_weight_ready),
    .fc2_bias(fc2_bias),
    .fc2_bias_valid(fc2_bias_valid),
    .fc2_bias_ready(fc2_bias_ready),
    .fc3_weight(fc3_weight),
    .fc3_weight_valid(fc3_weight_valid),
    .fc3_weight_ready(fc3_weight_ready),
    .fc3_bias(fc3_bias),
    .fc3_bias_valid(fc3_bias_valid),
    .fc3_bias_ready(fc3_bias_ready)
);

fc1_weight_source #(
.WEIGHT_PRECISION_0(fc1_WEIGHT_PRECISION_0),
.WEIGHT_PRECISION_1(fc1_WEIGHT_PRECISION_1),
.WEIGHT_TENSOR_SIZE_DIM_0(fc1_WEIGHT_TENSOR_SIZE_DIM_0),
.WEIGHT_PARALLELISM_DIM_0(fc1_WEIGHT_PARALLELISM_DIM_0),
.WEIGHT_TENSOR_SIZE_DIM_1(fc1_WEIGHT_TENSOR_SIZE_DIM_1),
.WEIGHT_PARALLELISM_DIM_1(fc1_WEIGHT_PARALLELISM_DIM_1)
) fc1_weight_source_0 (
    .clk(clk),
    .rst(rst),
    .data_out(fc1_weight),
    .data_out_ready(fc1_weight_ready),
    .data_out_valid(fc1_weight_valid)
);

fc1_bias_source #(
.BIAS_PRECISION_0(fc1_BIAS_PRECISION_0),
.BIAS_PRECISION_1(fc1_BIAS_PRECISION_1),
.BIAS_TENSOR_SIZE_DIM_0(fc1_BIAS_TENSOR_SIZE_DIM_0),
.BIAS_PARALLELISM_DIM_0(fc1_BIAS_PARALLELISM_DIM_0)
) fc1_bias_source_0 (
    .clk(clk),
    .rst(rst),
    .data_out(fc1_bias),
    .data_out_ready(fc1_bias_ready),
    .data_out_valid(fc1_bias_valid)
);

fc2_weight_source #(
.WEIGHT_PRECISION_0(fc2_WEIGHT_PRECISION_0),
.WEIGHT_PRECISION_1(fc2_WEIGHT_PRECISION_1),
.WEIGHT_TENSOR_SIZE_DIM_0(fc2_WEIGHT_TENSOR_SIZE_DIM_0),
.WEIGHT_PARALLELISM_DIM_0(fc2_WEIGHT_PARALLELISM_DIM_0),
.WEIGHT_TENSOR_SIZE_DIM_1(fc2_WEIGHT_TENSOR_SIZE_DIM_1),
.WEIGHT_PARALLELISM_DIM_1(fc2_WEIGHT_PARALLELISM_DIM_1)
) fc2_weight_source_0 (
    .clk(clk),
    .rst(rst),
    .data_out(fc2_weight),
    .data_out_ready(fc2_weight_ready),
    .data_out_valid(fc2_weight_valid)
);

fc2_bias_source #(
.BIAS_PRECISION_0(fc2_BIAS_PRECISION_0),
.BIAS_PRECISION_1(fc2_BIAS_PRECISION_1),
.BIAS_TENSOR_SIZE_DIM_0(fc2_BIAS_TENSOR_SIZE_DIM_0),
.BIAS_PARALLELISM_DIM_0(fc2_BIAS_PARALLELISM_DIM_0)
) fc2_bias_source_0 (
    .clk(clk),
    .rst(rst),
    .data_out(fc2_bias),
    .data_out_ready(fc2_bias_ready),
    .data_out_valid(fc2_bias_valid)
);

fc3_weight_source #(
.WEIGHT_PRECISION_0(fc3_WEIGHT_PRECISION_0),
.WEIGHT_PRECISION_1(fc3_WEIGHT_PRECISION_1),
.WEIGHT_TENSOR_SIZE_DIM_0(fc3_WEIGHT_TENSOR_SIZE_DIM_0),
.WEIGHT_PARALLELISM_DIM_0(fc3_WEIGHT_PARALLELISM_DIM_0),
.WEIGHT_TENSOR_SIZE_DIM_1(fc3_WEIGHT_TENSOR_SIZE_DIM_1),
.WEIGHT_PARALLELISM_DIM_1(fc3_WEIGHT_PARALLELISM_DIM_1)
) fc3_weight_source_0 (
    .clk(clk),
    .rst(rst),
    .data_out(fc3_weight),
    .data_out_ready(fc3_weight_ready),
    .data_out_valid(fc3_weight_valid)
);

fc3_bias_source #(
.BIAS_PRECISION_0(fc3_BIAS_PRECISION_0),
.BIAS_PRECISION_1(fc3_BIAS_PRECISION_1),
.BIAS_TENSOR_SIZE_DIM_0(fc3_BIAS_TENSOR_SIZE_DIM_0),
.BIAS_PARALLELISM_DIM_0(fc3_BIAS_PARALLELISM_DIM_0)
) fc3_bias_source_0 (
    .clk(clk),
    .rst(rst),
    .data_out(fc3_bias),
    .data_out_ready(fc3_bias_ready),
    .data_out_valid(fc3_bias_valid)
);

endmodule
    