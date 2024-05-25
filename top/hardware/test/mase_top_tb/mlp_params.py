

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

MLP_PARAMS = {
    # "fc1_DATA_IN_0_TENSOR_SIZE_DIM_0": 25,
    # "fc1_DATA_IN_0_TENSOR_SIZE_DIM_1": 1,
    "fc1_DATA_IN_0_PARALLELISM_DIM_1": 25,
    # "fc1_WEIGHT_TENSOR_SIZE_DIM_0": 25,
    # "fc1_WEIGHT_TENSOR_SIZE_DIM_1": 25,
    "fc1_WEIGHT_PARALLELISM_DIM_0": 25,
    "fc1_WEIGHT_PARALLELISM_DIM_1": 25,
    # "fc1_BIAS_TENSOR_SIZE_DIM_0": 25,
    "fc1_BIAS_PARALLELISM_DIM_0": 25
}