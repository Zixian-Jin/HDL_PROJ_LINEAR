
// =====================================
//     Mase Hardware (Dataflow)
//     Model: top
//     25/05/2024 11:30:43
// =====================================
`timescale 1ns/1ps
module top_dataflow #(
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
    input data_out_0_ready,
    input  [fc1_WEIGHT_PRECISION_0-1:0] fc1_weight [fc1_WEIGHT_PARALLELISM_DIM_0*fc1_WEIGHT_PARALLELISM_DIM_1-1:0],
    input  fc1_weight_valid,
    output fc1_weight_ready,
    input  [fc1_BIAS_PRECISION_0-1:0] fc1_bias [fc1_BIAS_PARALLELISM_DIM_0-1:0],
    input  fc1_bias_valid,
    output fc1_bias_ready,
    input  [fc2_WEIGHT_PRECISION_0-1:0] fc2_weight [fc2_WEIGHT_PARALLELISM_DIM_0*fc2_WEIGHT_PARALLELISM_DIM_1-1:0],
    input  fc2_weight_valid,
    output fc2_weight_ready,
    input  [fc2_BIAS_PRECISION_0-1:0] fc2_bias [fc2_BIAS_PARALLELISM_DIM_0-1:0],
    input  fc2_bias_valid,
    output fc2_bias_ready,
    input  [fc3_WEIGHT_PRECISION_0-1:0] fc3_weight [fc3_WEIGHT_PARALLELISM_DIM_0*fc3_WEIGHT_PARALLELISM_DIM_1-1:0],
    input  fc3_weight_valid,
    output fc3_weight_ready,
    input  [fc3_BIAS_PRECISION_0-1:0] fc3_bias [fc3_BIAS_PARALLELISM_DIM_0-1:0],
    input  fc3_bias_valid,
    output fc3_bias_ready
);

// --------------------------
//   fc1 signals
// --------------------------
logic [fc1_DATA_IN_0_PRECISION_0-1:0]  fc1_data_in_0        [fc1_DATA_IN_0_PARALLELISM_DIM_0*fc1_DATA_IN_0_PARALLELISM_DIM_1-1:0];
logic                             fc1_data_in_0_valid;
logic                             fc1_data_in_0_ready;
logic [fc1_DATA_OUT_0_PRECISION_0-1:0]  fc1_data_out_0        [fc1_DATA_OUT_0_PARALLELISM_DIM_0*fc1_DATA_OUT_0_PARALLELISM_DIM_1-1:0];
logic                             fc1_data_out_0_valid;
logic                             fc1_data_out_0_ready;
// --------------------------
//   relu signals
// --------------------------
logic [relu_DATA_IN_0_PRECISION_0-1:0]  relu_data_in_0        [relu_DATA_IN_0_PARALLELISM_DIM_0*relu_DATA_IN_0_PARALLELISM_DIM_1-1:0];
logic                             relu_data_in_0_valid;
logic                             relu_data_in_0_ready;
logic [relu_DATA_OUT_0_PRECISION_0-1:0]  relu_data_out_0        [relu_DATA_OUT_0_PARALLELISM_DIM_0*relu_DATA_OUT_0_PARALLELISM_DIM_1-1:0];
logic                             relu_data_out_0_valid;
logic                             relu_data_out_0_ready;
// --------------------------
//   fc2 signals
// --------------------------
logic [fc2_DATA_IN_0_PRECISION_0-1:0]  fc2_data_in_0        [fc2_DATA_IN_0_PARALLELISM_DIM_0*fc2_DATA_IN_0_PARALLELISM_DIM_1-1:0];
logic                             fc2_data_in_0_valid;
logic                             fc2_data_in_0_ready;
logic [fc2_DATA_OUT_0_PRECISION_0-1:0]  fc2_data_out_0        [fc2_DATA_OUT_0_PARALLELISM_DIM_0*fc2_DATA_OUT_0_PARALLELISM_DIM_1-1:0];
logic                             fc2_data_out_0_valid;
logic                             fc2_data_out_0_ready;
// --------------------------
//   relu_1 signals
// --------------------------
logic [relu_1_DATA_IN_0_PRECISION_0-1:0]  relu_1_data_in_0        [relu_1_DATA_IN_0_PARALLELISM_DIM_0*relu_1_DATA_IN_0_PARALLELISM_DIM_1-1:0];
logic                             relu_1_data_in_0_valid;
logic                             relu_1_data_in_0_ready;
logic [relu_1_DATA_OUT_0_PRECISION_0-1:0]  relu_1_data_out_0        [relu_1_DATA_OUT_0_PARALLELISM_DIM_0*relu_1_DATA_OUT_0_PARALLELISM_DIM_1-1:0];
logic                             relu_1_data_out_0_valid;
logic                             relu_1_data_out_0_ready;
// --------------------------
//   fc3 signals
// --------------------------
logic [fc3_DATA_IN_0_PRECISION_0-1:0]  fc3_data_in_0        [fc3_DATA_IN_0_PARALLELISM_DIM_0*fc3_DATA_IN_0_PARALLELISM_DIM_1-1:0];
logic                             fc3_data_in_0_valid;
logic                             fc3_data_in_0_ready;
logic [fc3_DATA_OUT_0_PRECISION_0-1:0]  fc3_data_out_0        [fc3_DATA_OUT_0_PARALLELISM_DIM_0*fc3_DATA_OUT_0_PARALLELISM_DIM_1-1:0];
logic                             fc3_data_out_0_valid;
logic                             fc3_data_out_0_ready;

// --------------------------
//   Component instantiation
// --------------------------

// fc1
fixed_linear #(
    .DATA_IN_0_PRECISION_0(fc1_DATA_IN_0_PRECISION_0), // = 8
    .DATA_IN_0_PRECISION_1(fc1_DATA_IN_0_PRECISION_1), // = 3
    .DATA_IN_0_TENSOR_SIZE_DIM_0(fc1_DATA_IN_0_TENSOR_SIZE_DIM_0), // = 25
    .DATA_IN_0_PARALLELISM_DIM_0(fc1_DATA_IN_0_PARALLELISM_DIM_0), // = 1
    .DATA_IN_0_TENSOR_SIZE_DIM_1(fc1_DATA_IN_0_TENSOR_SIZE_DIM_1), // = 1
    .DATA_IN_0_PARALLELISM_DIM_1(fc1_DATA_IN_0_PARALLELISM_DIM_1), // = 1
    .WEIGHT_PRECISION_0(fc1_WEIGHT_PRECISION_0), // = 8
    .WEIGHT_PRECISION_1(fc1_WEIGHT_PRECISION_1), // = 3
    .WEIGHT_TENSOR_SIZE_DIM_0(fc1_WEIGHT_TENSOR_SIZE_DIM_0), // = 25
    .WEIGHT_PARALLELISM_DIM_0(fc1_WEIGHT_PARALLELISM_DIM_0), // = 1
    .WEIGHT_TENSOR_SIZE_DIM_1(fc1_WEIGHT_TENSOR_SIZE_DIM_1), // = 25
    .WEIGHT_PARALLELISM_DIM_1(fc1_WEIGHT_PARALLELISM_DIM_1), // = 1
    .BIAS_PRECISION_0(fc1_BIAS_PRECISION_0), // = 8
    .BIAS_PRECISION_1(fc1_BIAS_PRECISION_1), // = 3
    .BIAS_TENSOR_SIZE_DIM_0(fc1_BIAS_TENSOR_SIZE_DIM_0), // = 25
    .BIAS_PARALLELISM_DIM_0(fc1_BIAS_PARALLELISM_DIM_0), // = 1
    .DATA_OUT_0_PRECISION_0(fc1_DATA_OUT_0_PRECISION_0), // = 4
    .DATA_OUT_0_PRECISION_1(fc1_DATA_OUT_0_PRECISION_1), // = 2
    .DATA_OUT_0_TENSOR_SIZE_DIM_0(fc1_DATA_OUT_0_TENSOR_SIZE_DIM_0), // = 25
    .DATA_OUT_0_PARALLELISM_DIM_0(fc1_DATA_OUT_0_PARALLELISM_DIM_0), // = 1
    .DATA_OUT_0_TENSOR_SIZE_DIM_1(fc1_DATA_OUT_0_TENSOR_SIZE_DIM_1), // = 1
    .DATA_OUT_0_PARALLELISM_DIM_1(fc1_DATA_OUT_0_PARALLELISM_DIM_1)
) fc1_inst (
    .clk(clk),
    .rst(rst),

    .data_in_0(fc1_data_in_0),
    .data_in_0_valid(fc1_data_in_0_valid),
    .data_in_0_ready(fc1_data_in_0_ready),
    
    .weight(fc1_weight),
    .weight_valid(fc1_weight_valid),
    .weight_ready(fc1_weight_ready),
    
    .bias(fc1_bias),
    .bias_valid(fc1_bias_valid),
    .bias_ready(fc1_bias_ready),
    
    .data_out_0(fc1_data_out_0),
    .data_out_0_valid(fc1_data_out_0_valid),
    .data_out_0_ready(fc1_data_out_0_ready)
);

// relu
fixed_relu #(
    .DATA_IN_0_PRECISION_0(relu_DATA_IN_0_PRECISION_0), // = 4
    .DATA_IN_0_PRECISION_1(relu_DATA_IN_0_PRECISION_1), // = 2
    .DATA_IN_0_TENSOR_SIZE_DIM_0(relu_DATA_IN_0_TENSOR_SIZE_DIM_0), // = 25
    .DATA_IN_0_PARALLELISM_DIM_0(relu_DATA_IN_0_PARALLELISM_DIM_0), // = 1
    .DATA_IN_0_TENSOR_SIZE_DIM_1(relu_DATA_IN_0_TENSOR_SIZE_DIM_1), // = 1
    .DATA_IN_0_PARALLELISM_DIM_1(relu_DATA_IN_0_PARALLELISM_DIM_1), // = 1
    .INPLACE(relu_INPLACE), // = 0
    .DATA_OUT_0_PRECISION_0(relu_DATA_OUT_0_PRECISION_0), // = 8
    .DATA_OUT_0_PRECISION_1(relu_DATA_OUT_0_PRECISION_1), // = 3
    .DATA_OUT_0_TENSOR_SIZE_DIM_0(relu_DATA_OUT_0_TENSOR_SIZE_DIM_0), // = 25
    .DATA_OUT_0_PARALLELISM_DIM_0(relu_DATA_OUT_0_PARALLELISM_DIM_0), // = 1
    .DATA_OUT_0_TENSOR_SIZE_DIM_1(relu_DATA_OUT_0_TENSOR_SIZE_DIM_1), // = 1
    .DATA_OUT_0_PARALLELISM_DIM_1(relu_DATA_OUT_0_PARALLELISM_DIM_1)
) relu_inst (
    .clk(clk),
    .rst(rst),

    .data_in_0(relu_data_in_0),
    .data_in_0_valid(relu_data_in_0_valid),
    .data_in_0_ready(relu_data_in_0_ready),
    
    .data_out_0(relu_data_out_0),
    .data_out_0_valid(relu_data_out_0_valid),
    .data_out_0_ready(relu_data_out_0_ready)
);

// fc2
fixed_linear #(
    .DATA_IN_0_PRECISION_0(fc2_DATA_IN_0_PRECISION_0), // = 8
    .DATA_IN_0_PRECISION_1(fc2_DATA_IN_0_PRECISION_1), // = 3
    .DATA_IN_0_TENSOR_SIZE_DIM_0(fc2_DATA_IN_0_TENSOR_SIZE_DIM_0), // = 25
    .DATA_IN_0_PARALLELISM_DIM_0(fc2_DATA_IN_0_PARALLELISM_DIM_0), // = 1
    .DATA_IN_0_TENSOR_SIZE_DIM_1(fc2_DATA_IN_0_TENSOR_SIZE_DIM_1), // = 1
    .DATA_IN_0_PARALLELISM_DIM_1(fc2_DATA_IN_0_PARALLELISM_DIM_1), // = 1
    .WEIGHT_PRECISION_0(fc2_WEIGHT_PRECISION_0), // = 8
    .WEIGHT_PRECISION_1(fc2_WEIGHT_PRECISION_1), // = 3
    .WEIGHT_TENSOR_SIZE_DIM_0(fc2_WEIGHT_TENSOR_SIZE_DIM_0), // = 25
    .WEIGHT_PARALLELISM_DIM_0(fc2_WEIGHT_PARALLELISM_DIM_0), // = 1
    .WEIGHT_TENSOR_SIZE_DIM_1(fc2_WEIGHT_TENSOR_SIZE_DIM_1), // = 100
    .WEIGHT_PARALLELISM_DIM_1(fc2_WEIGHT_PARALLELISM_DIM_1), // = 1
    .BIAS_PRECISION_0(fc2_BIAS_PRECISION_0), // = 8
    .BIAS_PRECISION_1(fc2_BIAS_PRECISION_1), // = 3
    .BIAS_TENSOR_SIZE_DIM_0(fc2_BIAS_TENSOR_SIZE_DIM_0), // = 100
    .BIAS_PARALLELISM_DIM_0(fc2_BIAS_PARALLELISM_DIM_0), // = 1
    .DATA_OUT_0_PRECISION_0(fc2_DATA_OUT_0_PRECISION_0), // = 4
    .DATA_OUT_0_PRECISION_1(fc2_DATA_OUT_0_PRECISION_1), // = 2
    .DATA_OUT_0_TENSOR_SIZE_DIM_0(fc2_DATA_OUT_0_TENSOR_SIZE_DIM_0), // = 100
    .DATA_OUT_0_PARALLELISM_DIM_0(fc2_DATA_OUT_0_PARALLELISM_DIM_0), // = 1
    .DATA_OUT_0_TENSOR_SIZE_DIM_1(fc2_DATA_OUT_0_TENSOR_SIZE_DIM_1), // = 1
    .DATA_OUT_0_PARALLELISM_DIM_1(fc2_DATA_OUT_0_PARALLELISM_DIM_1)
) fc2_inst (
    .clk(clk),
    .rst(rst),

    .data_in_0(fc2_data_in_0),
    .data_in_0_valid(fc2_data_in_0_valid),
    .data_in_0_ready(fc2_data_in_0_ready),
    
    .weight(fc2_weight),
    .weight_valid(fc2_weight_valid),
    .weight_ready(fc2_weight_ready),
    
    .bias(fc2_bias),
    .bias_valid(fc2_bias_valid),
    .bias_ready(fc2_bias_ready),
    
    .data_out_0(fc2_data_out_0),
    .data_out_0_valid(fc2_data_out_0_valid),
    .data_out_0_ready(fc2_data_out_0_ready)
);

// relu_1
fixed_relu #(
    .DATA_IN_0_PRECISION_0(relu_1_DATA_IN_0_PRECISION_0), // = 4
    .DATA_IN_0_PRECISION_1(relu_1_DATA_IN_0_PRECISION_1), // = 2
    .DATA_IN_0_TENSOR_SIZE_DIM_0(relu_1_DATA_IN_0_TENSOR_SIZE_DIM_0), // = 100
    .DATA_IN_0_PARALLELISM_DIM_0(relu_1_DATA_IN_0_PARALLELISM_DIM_0), // = 1
    .DATA_IN_0_TENSOR_SIZE_DIM_1(relu_1_DATA_IN_0_TENSOR_SIZE_DIM_1), // = 1
    .DATA_IN_0_PARALLELISM_DIM_1(relu_1_DATA_IN_0_PARALLELISM_DIM_1), // = 1
    .INPLACE(relu_1_INPLACE), // = 0
    .DATA_OUT_0_PRECISION_0(relu_1_DATA_OUT_0_PRECISION_0), // = 8
    .DATA_OUT_0_PRECISION_1(relu_1_DATA_OUT_0_PRECISION_1), // = 3
    .DATA_OUT_0_TENSOR_SIZE_DIM_0(relu_1_DATA_OUT_0_TENSOR_SIZE_DIM_0), // = 100
    .DATA_OUT_0_PARALLELISM_DIM_0(relu_1_DATA_OUT_0_PARALLELISM_DIM_0), // = 1
    .DATA_OUT_0_TENSOR_SIZE_DIM_1(relu_1_DATA_OUT_0_TENSOR_SIZE_DIM_1), // = 1
    .DATA_OUT_0_PARALLELISM_DIM_1(relu_1_DATA_OUT_0_PARALLELISM_DIM_1)
) relu_1_inst (
    .clk(clk),
    .rst(rst),

    .data_in_0(relu_1_data_in_0),
    .data_in_0_valid(relu_1_data_in_0_valid),
    .data_in_0_ready(relu_1_data_in_0_ready),
    
    .data_out_0(relu_1_data_out_0),
    .data_out_0_valid(relu_1_data_out_0_valid),
    .data_out_0_ready(relu_1_data_out_0_ready)
);

// fc3
fixed_linear #(
    .DATA_IN_0_PRECISION_0(fc3_DATA_IN_0_PRECISION_0), // = 8
    .DATA_IN_0_PRECISION_1(fc3_DATA_IN_0_PRECISION_1), // = 3
    .DATA_IN_0_TENSOR_SIZE_DIM_0(fc3_DATA_IN_0_TENSOR_SIZE_DIM_0), // = 100
    .DATA_IN_0_PARALLELISM_DIM_0(fc3_DATA_IN_0_PARALLELISM_DIM_0), // = 1
    .DATA_IN_0_TENSOR_SIZE_DIM_1(fc3_DATA_IN_0_TENSOR_SIZE_DIM_1), // = 1
    .DATA_IN_0_PARALLELISM_DIM_1(fc3_DATA_IN_0_PARALLELISM_DIM_1), // = 1
    .WEIGHT_PRECISION_0(fc3_WEIGHT_PRECISION_0), // = 8
    .WEIGHT_PRECISION_1(fc3_WEIGHT_PRECISION_1), // = 3
    .WEIGHT_TENSOR_SIZE_DIM_0(fc3_WEIGHT_TENSOR_SIZE_DIM_0), // = 100
    .WEIGHT_PARALLELISM_DIM_0(fc3_WEIGHT_PARALLELISM_DIM_0), // = 1
    .WEIGHT_TENSOR_SIZE_DIM_1(fc3_WEIGHT_TENSOR_SIZE_DIM_1), // = 10
    .WEIGHT_PARALLELISM_DIM_1(fc3_WEIGHT_PARALLELISM_DIM_1), // = 1
    .BIAS_PRECISION_0(fc3_BIAS_PRECISION_0), // = 8
    .BIAS_PRECISION_1(fc3_BIAS_PRECISION_1), // = 3
    .BIAS_TENSOR_SIZE_DIM_0(fc3_BIAS_TENSOR_SIZE_DIM_0), // = 10
    .BIAS_PARALLELISM_DIM_0(fc3_BIAS_PARALLELISM_DIM_0), // = 1
    .DATA_OUT_0_PRECISION_0(fc3_DATA_OUT_0_PRECISION_0), // = 8
    .DATA_OUT_0_PRECISION_1(fc3_DATA_OUT_0_PRECISION_1), // = 3
    .DATA_OUT_0_TENSOR_SIZE_DIM_0(fc3_DATA_OUT_0_TENSOR_SIZE_DIM_0), // = 10
    .DATA_OUT_0_PARALLELISM_DIM_0(fc3_DATA_OUT_0_PARALLELISM_DIM_0), // = 1
    .DATA_OUT_0_TENSOR_SIZE_DIM_1(fc3_DATA_OUT_0_TENSOR_SIZE_DIM_1), // = 1
    .DATA_OUT_0_PARALLELISM_DIM_1(fc3_DATA_OUT_0_PARALLELISM_DIM_1)
) fc3_inst (
    .clk(clk),
    .rst(rst),

    .data_in_0(fc3_data_in_0),
    .data_in_0_valid(fc3_data_in_0_valid),
    .data_in_0_ready(fc3_data_in_0_ready),
    
    .weight(fc3_weight),
    .weight_valid(fc3_weight_valid),
    .weight_ready(fc3_weight_ready),
    
    .bias(fc3_bias),
    .bias_valid(fc3_bias_valid),
    .bias_ready(fc3_bias_ready),
    
    .data_out_0(fc3_data_out_0),
    .data_out_0_valid(fc3_data_out_0_valid),
    .data_out_0_ready(fc3_data_out_0_ready)
);


// --------------------------
//   Interconnections
// --------------------------
    
    assign data_in_0_ready = fc1_data_in_0_ready;
    assign fc1_data_in_0_valid    = data_in_0_valid;
    assign fc1_data_in_0    = data_in_0;

    assign data_out_0_valid = fc3_data_out_0_valid;
    assign fc3_data_out_0_ready    = data_out_0_ready;
    assign data_out_0 = fc3_data_out_0;

    assign fc1_data_out_0_ready  = relu_data_in_0_ready;
    assign relu_data_in_0_valid    = fc1_data_out_0_valid;
    assign relu_data_in_0 = fc1_data_out_0;

    assign relu_data_out_0_ready  = fc2_data_in_0_ready;
    assign fc2_data_in_0_valid    = relu_data_out_0_valid;
    assign fc2_data_in_0 = relu_data_out_0;

    assign fc2_data_out_0_ready  = relu_1_data_in_0_ready;
    assign relu_1_data_in_0_valid    = fc2_data_out_0_valid;
    assign relu_1_data_in_0 = fc2_data_out_0;

    assign relu_1_data_out_0_ready  = fc3_data_in_0_ready;
    assign fc3_data_in_0_valid    = relu_1_data_out_0_valid;
    assign fc3_data_in_0 = relu_1_data_out_0;

endmodule
    