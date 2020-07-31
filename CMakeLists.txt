cmake_minimum_required(VERSION 3.13)
project(framework)

set(CMAKE_CXX_STANDARD 14)

# setting up MathTools Package
set(CMAKE_INCLUDE_PATH / framework/cpp/lib/MathTools/BasicToolSet.h)
set(CMAKE_INCLUDE_PATH / framework/cpp/lib/MathTools/BooleanAlgebra.h)
set(CMAKE_INCLUDE_PATH / framework/cpp/lib/MathTools/AdvancedTools/LinearAlgebra.h)
set(CMAKE_INCLUDE_PATH / framework/cpp/lib/MathTools/AdvancedTools/ScientificToolSet.h)
set(CMAKE_INCLUDE_PATH / framework/cpp/lib/StringTools.h)
set(CMAKE_INCLUDE_PATH / framework/cpp/lib/main.h)
set(CMAKE_INCLUDE_PATH / framework/command.h)

# setting up the DataFile Tools package
set(CMAKE_INCLUDE_PATH / framework/cpp/lib/DatafileTools/connectfile.h)

#include_directories(rock-paper-scissors-cpp-version game_logic.h)
add_executable(framework cpp/main.cpp)
