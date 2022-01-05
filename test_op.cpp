#include <torch/script.h>

int main(int argc, const char* argv[]) {
    torch::jit::Module module = torch::jit::load("traced.pt");
    std::cout << "OK" << std::endl;
}
