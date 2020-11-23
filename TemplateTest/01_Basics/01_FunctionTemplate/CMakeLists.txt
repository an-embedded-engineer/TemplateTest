# Set CMake Version
cmake_minimum_required(VERSION 3.1)

# Generate Executable File
add_executable(FunctionTemplate
  main.cpp
)

# Set Include Directories
target_include_directories(FunctionTemplate
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${Boost_INCLUDE_DIRS}
)

