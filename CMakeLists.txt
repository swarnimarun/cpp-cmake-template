cmake_minimum_required(VERSION 3.15)
project(example CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs/fmt)

add_executable(main src/main.cpp)

target_link_libraries(main PRIVATE fmt)
