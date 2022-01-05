# Using Torchscript from Rust with custom ops
This repository demonstrates using a Docker container to build a Rust application which loads a Torchscript model serialized from Python with custom operations written in C++ and CUDA.

## Sources
* [Pytorch Docker container](https://hub.docker.com/r/pytorch/pytorch/tags)
* [C++/CUDA extensions for PyTorch](https://pytorch.org/tutorials/advanced/cpp_extension.html#writing-a-c-extension)
* [Torchscript](https://pytorch.org/tutorials/advanced/cpp_export.html)
* [C++ extension example code](https://github.com/pytorch/extension-cpp)
