#!/usr/bin/env python
import torch
torch.ops.load_library('add_one_op/build/libadd_one.so')

add_one = torch.ops.my_ops.add_one
if bool(torch.all(add_one(torch.zeros(3, 3)) == torch.ones(3, 3))):
    print("Test OK")
