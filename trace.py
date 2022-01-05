#!/usr/bin/env python
import torch
import torch.nn as nn
import sys

torch.ops.load_library('add_one_op/build/libadd_one.so')
add_one = torch.ops.my_ops.add_one

class Model(nn.Module):
    def forward(self, inputs):
        return add_one(inputs)

device = torch.device("cuda")

# Serialize and save model
model = Model().to(device)

with torch.no_grad():
    traced_cell = torch.jit.trace(model, torch.ones(3, 3))

traced_cell.save('traced.pt')

print("Traced OK")
