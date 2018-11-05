cmake_minimum_required(VERSION 3.12)
project(8_p)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(8_p
        8-p.cpp
        compare.h)
