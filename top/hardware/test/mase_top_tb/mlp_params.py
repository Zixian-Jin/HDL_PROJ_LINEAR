

# Sample MLP configurations:
# class MLP(torch.nn.Module):
#     """
#     Toy quantized FC model for digit recognition on MNIST
#     """
#     def __init__(self) -> None:
#         super().__init__()
#         self.fc1 = nn.Linear(5 * 5, 5 * 5)
#         self.fc2 = nn.Linear(5 * 5, 5 * 5 * 4)
#         self.fc3 = nn.Linear(5 * 5 * 4, 10)
#     def forward(self, x):
#         x = torch.flatten(x, start_dim=1, end_dim=-1)
#         x = torch.nn.functional.relu(self.fc1(x))
#         x = torch.nn.functional.relu(self.fc2(x))
#         x = self.fc3(x)
#         return x

# x:(25) -> fc1(25) -> relu1(25) -> fc2(100) -> relu2(100) -> fc3(10)

X_DIM = 15
FC1_DIM = 15
FC1_DEPTH = 5
FC2_DIM = 15
FC2_DEPTH = 1
FC3_DIM = 10

MLP_PARAMS = {
    ########### fc1 ###########
    "fc1_DATA_IN_0_TENSOR_SIZE_DIM_0": 1,
    "fc1_DATA_IN_0_TENSOR_SIZE_DIM_1": X_DIM,
    "fc1_DATA_IN_0_PARALLELISM_DIM_0": 1,
    "fc1_DATA_IN_0_PARALLELISM_DIM_1": int(X_DIM/FC1_DEPTH),
    "fc1_WEIGHT_TENSOR_SIZE_DIM_0": X_DIM,
    "fc1_WEIGHT_TENSOR_SIZE_DIM_1": FC1_DIM,
    "fc1_WEIGHT_PARALLELISM_DIM_0": int(X_DIM/FC1_DEPTH),
    "fc1_WEIGHT_PARALLELISM_DIM_1": FC1_DIM,
    # TENSOR_SIZE inactivated for BIAS
    "fc1_BIAS_PARALLELISM_DIM_0": FC1_DIM,  
    # TENSOR_SIZE inactivated for DATA_OUT_0
    "fc1_DATA_OUT_0_PARALLELISM_DIM_0": 1,
    "fc1_DATA_OUT_0_PARALLELISM_DIM_1": FC1_DIM,
    
    ########### fc2 ###########
    "fc2_DATA_IN_0_TENSOR_SIZE_DIM_0": 1,
    "fc2_DATA_IN_0_TENSOR_SIZE_DIM_1": FC1_DIM,
    "fc2_DATA_IN_0_PARALLELISM_DIM_0": 1,
    "fc2_DATA_IN_0_PARALLELISM_DIM_1": FC1_DIM,
    "fc2_WEIGHT_TENSOR_SIZE_DIM_0": FC1_DIM,
    "fc2_WEIGHT_TENSOR_SIZE_DIM_1": FC2_DIM,
    "fc2_WEIGHT_PARALLELISM_DIM_0": FC1_DIM,
    "fc2_WEIGHT_PARALLELISM_DIM_1": FC2_DIM,
    # TENSOR_SIZE inactivated for BIAS
    "fc2_BIAS_PARALLELISM_DIM_0": FC2_DIM,  
    # TENSOR_SIZE inactivated for DATA_OUT_0
    "fc2_DATA_OUT_0_PARALLELISM_DIM_0": 1,
    "fc2_DATA_OUT_0_PARALLELISM_DIM_1": FC2_DIM, 

    ########### fc3 ###########
    "fc3_DATA_IN_0_TENSOR_SIZE_DIM_0": 1,
    "fc3_DATA_IN_0_TENSOR_SIZE_DIM_1": FC2_DIM,
    "fc3_DATA_IN_0_PARALLELISM_DIM_0": 1,
    "fc3_DATA_IN_0_PARALLELISM_DIM_1": FC2_DIM,
    "fc3_WEIGHT_TENSOR_SIZE_DIM_0": FC2_DIM,
    "fc3_WEIGHT_TENSOR_SIZE_DIM_1": FC3_DIM,
    "fc3_WEIGHT_PARALLELISM_DIM_0": FC2_DIM,
    "fc3_WEIGHT_PARALLELISM_DIM_1": FC3_DIM,
    # TENSOR_SIZE inactivated for BIAS
    "fc3_BIAS_PARALLELISM_DIM_0": FC3_DIM,  
    # TENSOR_SIZE inactivated for DATA_OUT_0
    "fc3_DATA_OUT_0_PARALLELISM_DIM_0": 1,
    "fc3_DATA_OUT_0_PARALLELISM_DIM_1": FC3_DIM, 
    
    ########### relu ###########
    # TENSOR_SIZE inactivated for relu
    "relu_DATA_IN_0_PARALLELISM_DIM_0": 1,
    "relu_DATA_IN_0_PARALLELISM_DIM_1": FC1_DIM,
    "relu_DATA_OUT_0_PARALLELISM_DIM_0": 1,
    "relu_DATA_OUT_0_PARALLELISM_DIM_1": FC1_DIM,   
    
    ########### relu_1 ###########
    # TENSOR_SIZE inactivated for relu_1
    "relu_1_DATA_IN_0_PARALLELISM_DIM_0": 1,
    "relu_1_DATA_IN_0_PARALLELISM_DIM_1": FC2_DIM,
    "relu_1_DATA_OUT_0_PARALLELISM_DIM_0": 1,
    "relu_1_DATA_OUT_0_PARALLELISM_DIM_1": FC2_DIM,  
}