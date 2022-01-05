#include <torch/extension.h>

torch::Tensor add_one(torch::Tensor input) {
    return input + torch::ones_like(input);
}

TORCH_LIBRARY(my_ops, m) {
    m.def("add_one", &add_one);
}
