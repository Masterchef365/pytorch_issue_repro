#include <torch/script.h>
//#include <torch/extension.h>

/// In order to load this dynamic library up with C++ or Rust, we need to fool the linker into thinking we use the library from our code.
#ifdef _WIN32 
extern "C" void __declspec( dllexport ) test_library() { std::cout << "Custom op loaded on Windows" << std::endl; }
#else
extern "C" void test_library() { std::cout << "Custom op loaded on Linux" << std::endl; }
#endif

torch::Tensor add_one(torch::Tensor input) {
    return input + torch::ones_like(input);
}

TORCH_LIBRARY(my_ops, m) {
    m.def("add_one", &add_one);
}
