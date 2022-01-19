cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(custom_ops)
set( CMAKE_VERBOSE_MAKEFILE on )

find_package(Torch REQUIRED)
find_package(PythonLibs 3.7 REQUIRED)

link_directories("add_one_op/build/")

add_executable(test_op test_op.cpp)
target_link_libraries(test_op add_one "${TORCH_LIBRARIES}" "${PYTHON_LIBRARIES}")
set_property(TARGET test_op PROPERTY CXX_STANDARD 14)
