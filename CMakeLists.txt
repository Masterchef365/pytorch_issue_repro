# Basic CMake setup
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(custom_ops)
#set( CMAKE_VERBOSE_MAKEFILE on )

find_package(Torch REQUIRED)

#add_library(add_one SHARED IMPORTED)
#set_target_properties(add_one PROPERTIES IMPORTED_LOCATION "add_one_op/build/")

link_directories("add_one_op/build/")

add_executable(test_op test_op.cpp)
target_link_libraries(test_op "${TORCH_LIBRARIES}")
target_link_libraries(test_op add_one)
set_property(TARGET test_op PROPERTY CXX_STANDARD 14)
