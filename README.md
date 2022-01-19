# Using Torchscript with custom ops from C++
This repository aims to demonstrate using custom C++ operations in PyTorch, serializing a model to TorchScript, then using said TorchScript model from C++. Currently this results in linker errors.

Assuming Docker and [nvidia-docker2](https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/install-guide.html#docker) is installed, one may reproduce the issue with the following command:
```sh
./run_docker.sh ./full_test.sh 
```

If you already have pytorch 1.10.0 installed, you may simply run `./full_test.sh`.

File manifest:
* `full_test.sh`: Execute all of the steps required to reproduce the issue
* `add_one_op`: Custom operator subdirectory
* `build_custom_ops.sh`: Build the custom operator
* `build_cpp_test_op.sh`: Build the C++ custom operator test program
* `CMakeLists.txt`: Build script for C++ custom operator test program
* `test_op.cpp`: Test custom op from C++
* `Dockerfile`: Dockerfile including pytorch and cmake
* `run_docker.sh`: Run the Docker container with the specified commands
* `test_op.py`: Test custom op from Python
* `test_trace.py`: Test TorchScript model
* `trace.py`: Serialize model to TorchScript

## Sources
* [Pytorch Docker container](https://hub.docker.com/r/pytorch/pytorch/tags)
* [C++/CUDA extensions for PyTorch](https://pytorch.org/tutorials/advanced/cpp_extension.html#writing-a-c-extension)
* [Torchscript](https://pytorch.org/tutorials/advanced/cpp_export.html)
* [C++ extension example code](https://github.com/pytorch/extension-cpp)
