#!/usr/bin/env python
import torch

torch.ops.load_library('add_one_op/build/add_one.so')

model = torch.jit.load("traced.pt")

print(model(torch.zeros(3, 3)))
