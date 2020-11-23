# Set CMake Version
cmake_minimum_required(VERSION 3.1)

# Set Project Name
project(CppUdpComTest CXX)

# Set C++ Options
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "-Wall")

# Add Packages
find_package(Threads REQUIRED)

# Find Boost Libraries
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)

find_package(Boost 1.74.0 REQUIRED
  COMPONENTS
    date_time
    system
)

message("## Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")  # デバッグ用：解決したパスを表示
message("## Boost_LIBRARY_DIRS: ${Boost_LIBRARY_DIRS}")  # デバッグ用：解決したパスを表示

# Add Sub Directories
add_subdirectory(TemplateTest)



