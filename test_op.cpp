#include <torch/script.h>

// Here we fool C++ into linking our custom op
extern "C" {
    void test_library();
}

int main(int argc, const char* argv[]) {
    test_library(); // We must actually use it here 
    torch::jit::Module module = torch::jit::load("traced.pt");
    std::cout << "OK" << std::endl;
}
