cmake_minimum_required(VERSION 3.26)

set(DIR ${CMAKE_SOURCE_DIR}/include)
add_executable(ComputerSimulator main.cpp cpu.cpp disk.cpp gpu.cpp kbd.cpp ram.cpp
${DIR}/cpu.h ${DIR}/disk.h ${DIR}/gpu.h ${DIR}/gpu.h ${DIR}/ram.h)
target_include_directories(ComputerSimulator PUBLIC ${DIR})