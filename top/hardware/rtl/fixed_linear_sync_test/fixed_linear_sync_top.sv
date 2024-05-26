module fixed_linear_sync_top #(
    parameter fc1_DATA_IN_0_PRECISION_0 = 8,
    parameter fc1_DATA_IN_0_PRECISION_1 = 3,
    parameter fc1_DATA_IN_0_TENSOR_SIZE_DIM_0 = 1,
    parameter fc1_DATA_IN_0_PARALLELISM_DIM_0 = 1,
    parameter fc1_DATA_IN_0_TENSOR_SIZE_DIM_1 = 20,
    parameter fc1_DATA_IN_0_PARALLELISM_DIM_1 = 4,
    parameter fc1_WEIGHT_PRECISION_0 = 8,
    parameter fc1_WEIGHT_PRECISION_1 = 3,
    parameter fc1_WEIGHT_TENSOR_SIZE_DIM_0 = 20,
    parameter fc1_WEIGHT_PARALLELISM_DIM_0 = 4,
    parameter fc1_WEIGHT_TENSOR_SIZE_DIM_1 = 10,
    parameter fc1_WEIGHT_PARALLELISM_DIM_1 = 10,
    parameter fc1_BIAS_PRECISION_0 = 8,
    parameter fc1_BIAS_PRECISION_1 = 3,
    parameter fc1_BIAS_TENSOR_SIZE_DIM_0 = 10,
    parameter fc1_BIAS_PARALLELISM_DIM_0 = 10,
    parameter fc1_DATA_OUT_0_PRECISION_0 = 4,
    parameter fc1_DATA_OUT_0_PRECISION_1 = 2,
    parameter fc1_DATA_OUT_0_TENSOR_SIZE_DIM_0 = 1,
    parameter fc1_DATA_OUT_0_PARALLELISM_DIM_0 = 1,
    parameter fc1_DATA_OUT_0_TENSOR_SIZE_DIM_1 = 1,
    parameter fc1_DATA_OUT_0_PARALLELISM_DIM_1 = 10
) (
    input clk,
    input rst
);

logic [fc1_DATA_IN_0_PRECISION_0-1:0]  fc1_data_in_0        [fc1_DATA_IN_0_PARALLELISM_DIM_0*fc1_DATA_IN_0_PARALLELISM_DIM_1-1:0];
logic                             fc1_data_in_0_valid;
logic                             fc1_data_in_0_ready;
logic [fc1_DATA_OUT_0_PRECISION_0-1:0]  fc1_data_out_0        [fc1_DATA_OUT_0_PARALLELISM_DIM_0*fc1_DATA_OUT_0_PARALLELISM_DIM_1-1:0];
logic                             fc1_data_out_0_valid;
logic                             fc1_data_out_0_ready;

logic [fc1_WEIGHT_PRECISION_0-1:0]  fc1_weight        [fc1_WEIGHT_PARALLELISM_DIM_0*fc1_WEIGHT_PARALLELISM_DIM_1-1:0];
logic                             fc1_weight_valid;
logic                             fc1_weight_ready;
logic [fc1_BIAS_PRECISION_0-1:0]  fc1_bias        [fc1_BIAS_PARALLELISM_DIM_0-1:0];
logic                             fc1_bias_valid;
logic                             fc1_bias_ready;

// generate input data
assign fc1_data_in_0_valid = 1;

logic [4:0] counter;
initial begin
    counter = '0;
end
always @(posedge clk) begin
        if (fc1_data_in_0_valid && fc1_data_in_0_ready) begin
            counter <= (counter == 5'b11111) ? 0 : counter + 1'b1;
        end
end


for (genvar i = 0; i < fc1_DATA_IN_0_PARALLELISM_DIM_0*fc1_DATA_IN_0_PARALLELISM_DIM_1; i += 1) begin
    always @(posedge clk) begin
        if (fc1_data_in_0_valid && fc1_data_in_0_ready) begin
            fc1_data_in_0[i] = {3'b000, counter};
        end
    end
end


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

endmodule