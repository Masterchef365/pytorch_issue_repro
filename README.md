# Using Torchscript from Rust with custom ops
This repository demonstrates using a Docker container to build a Rust application which loads a Torchscript model serialized from Python with custom operations written in C++ and CUDA.

## Sources
* [Pytorch Docker container](https://hub.docker.com/r/pytorch/pytorch/tags)
* [Installing Rust into a Docker container](https://github.com/rust-lang/docker-rust/blob/master/1.55.0/buster/Dockerfile)
* [Using Pytorch from Rust (tch-rs)](https://github.com/LaurentMazare/tch-rs)
* [C++/CUDA extensions for PyTorch](https://pytorch.org/tutorials/advanced/cpp_extension.html#writing-a-c-extension)
* [Torchscript](https://pytorch.org/tutorials/advanced/cpp_export.html)
* [C++ extension example code](https://github.com/pytorch/extension-cpp)

## TODO:
- [ ] Fork the example code
    * `setup.py build --build-lib build`, use instead of python import (or do both?)
- [ ] Serialize a basic model to Torchscript from Python
- [ ] Use the model from Python
- [ ] Use the model from C++
- [ ] Use the model from Rust
