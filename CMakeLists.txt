cmake_minimum_required(VERSION 3.14)
project(debug)

set(CMAKE_CXX_STANDARD 17)

add_executable(MAIN main.cpp vectors.cpp vectors.hpp basic_includes.hpp math.hpp math_functions.cpp math_functions.hpp)