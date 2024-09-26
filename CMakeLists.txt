cmake_minimum_required(VERSION 3.29)
project(huff)

set(CMAKE_CXX_STANDARD 23)

add_executable(huff src/main.cpp
        src/huffman.h
        src/huffman.cpp)
