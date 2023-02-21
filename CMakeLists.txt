cmake_minimum_required(VERSION 3.17)
project(P1)

set(CMAKE_CXX_STANDARD 14)

add_executable(P1 main.cpp scanner.cpp scanner.h token.h testScanner.cpp testScanner.h)