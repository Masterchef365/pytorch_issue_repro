#include <torch/script.h>

extern "C" {
    void test_library();
}

int main(int argc, const char* argv[]) {
    test_library();
    torch::jit::Module module = torch::jit::load("traced.pt");
    std::cout << "OK" << std::endl;
}
