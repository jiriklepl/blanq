cmake_minimum_required(VERSION 3.20)

project(
    "Blanq"
    VERSION 0.1
    DESCRIPTION "Not Noarr"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(include)

add_executable(test-constrained-fold-explicit src/test-constrained-fold-explicit.cpp)
add_executable(test-constrained-fold-implicit src/test-constrained-fold-implicit.cpp)
