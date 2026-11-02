cmake_minimum_required(VERSION 4.3)
project(Employees)

set(CMAKE_CXX_STANDARD 20)

add_executable(Employees main.cpp
        Employee.cpp
        Employee.h)
