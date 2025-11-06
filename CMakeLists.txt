cmake_minimum_required(VERSION 4.0)
project(SYSC_4001_Assignment_2_Concurrent_Processes_Part_II)

set(CMAKE_CXX_STANDARD 26)

add_executable(SYSC_4001_Assignment_2_Concurrent_Processes_Part_II main.cpp
        cmake-build-debug/part1_parent.cpp
        cmake-build-debug/part1_parent.h
        cmake-build-debug/part2_parent.cpp
        cmake-build-debug/part2_parent.h)
