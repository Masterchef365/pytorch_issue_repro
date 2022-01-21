#include <torch/script.h>
#include <dlfcn.h>
#include <iostream>
#include <fstream>
#include <cstdio>

int main(int argc, const char* argv[]) {
	auto path = "/cwd/add_one_op/build/libadd_one.so";

	std::ifstream file(path);
	if(file.is_open()){
		std::cout << "Found library" << std::endl;
	} else {
		std::cout << "File not found" << std::endl;
		return -1;
	}

	void* load_res = dlopen(path, RTLD_NOW);
	if (load_res) {
		std::cout << "Load succeeded!" << std::endl;
	} else {
		std::cout << "Load failed; " << dlerror() << std::endl;
		return -1;
	}
	torch::jit::Module module = torch::jit::load("traced.pt");
	std::cout << "OK" << std::endl;
}
