cmake_minimum_required(VERSION 3.10)  # Minimum required version of CMake
project(Operations)                     # Name of the project

set(CMAKE_C_STANDARD 99)                # Specify the C standard to use

# Add the executable target
add_executable(operations operations.c)  # Use operations.c in the current directory
