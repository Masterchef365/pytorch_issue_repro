# Basic CMake setup
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(add_one)
set( CMAKE_VERBOSE_MAKEFILE on )

find_package(Torch REQUIRED)

add_library(add_one SHARED add_one.cpp)
set_property(TARGET add_one PROPERTY CXX_STANDARD 14)

target_compile_features(add_one PUBLIC cxx_range_for)
target_link_libraries(add_one "${TORCH_LIBRARIES}")
target_compile_definitions(add_one PRIVATE add_one_EXPORTS)
