#!/usr/bin/env python
import torch
torch.ops.load_library('add_one_op/build/libadd_one.so')

print(torch.ops.my_ops.add_one(torch.ones(3, 3)))
