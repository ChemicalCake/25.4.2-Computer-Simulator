cmake_minimum_required(VERSION 3.26)
project("ComputerSimulator" VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_subdirectory(src)
