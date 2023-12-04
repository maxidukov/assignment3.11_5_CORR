cmake_minimum_required(VERSION 3.5)

project(assignment3.11_5_QC_CORR LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(FigDynamicLib SHARED
    src/base.cpp
    src/triangle.cpp
    src/isosceles.cpp
    src/right_triangle.cpp
    src/equilateral.cpp
    src/quadrangle.cpp
    src/parallelogram.cpp
    src/rectangle.cpp
    src/square.cpp
    src/rhombus.cpp
)

target_include_directories(FigDynamicLib PRIVATE include)

add_executable(Exe main.cpp)

target_link_libraries(Exe FigDynamicLib)
