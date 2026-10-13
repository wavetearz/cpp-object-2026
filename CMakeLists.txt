cmake_minimum_required(VERSION 4.1)
project(cpp_object_2026)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_object_2026
        main.cpp
        Library.cpp
        Library.h
        Worker.cpp
        Worker.h
        Librarian.cpp
        Librarian.h
        Janitor.cpp
        Janitor.h
        WorkerType.h
        Product.cpp
        Product.h
        ProductType.h
        Book.cpp
        Book.h
        Magazine.cpp
        Magazine.h
)
