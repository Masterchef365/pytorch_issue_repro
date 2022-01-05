#!/usr/bin/env bash
# Build the custom C++ op
./build_custom_ops.sh

# Test the op from Python
./test_op.py

# Build the C++ op tester
./build_cpp_test_op.sh

# Create a Torchscript module
./trace.py

# Test the Torchscript module from Python
./test_trace.py

# Test the Torchscript module from C++
./build/test_op
