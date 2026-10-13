cmake_minimum_required(VERSION 4.1)
project(cpp_object_2026)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_object_2026
        main.cpp
        Nucleotide.cpp
        Nucleotide.h
        Sequence.h
        Sequence.cpp
        Nucleotide.cpp
)
