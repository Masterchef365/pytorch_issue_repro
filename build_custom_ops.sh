#!/usr/bin/env bash
pushd add_one_op
mkdir build
pushd build
cmake -DCMAKE_PREFIX_PATH="$(python -c 'import torch.utils; print(torch.utils.cmake_prefix_path)')" ..
make -j
