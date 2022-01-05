import torch
torch.ops.load_library('add_one_op/build/add_one.so')

print(torch.ops.my_ops.add_one(torch.ones(1, 1)))
