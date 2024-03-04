cmake_minimum_required(VERSION 3.0)
project(MyProject VERSION 1.0.0 LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directory for header files
include_directories(${CMAKE_SOURCE_DIR}/header)

# Add source files to the executable
add_executable(run
    src/inputoutput.cpp
    src/Movie.cpp
    src/MovieMethods.cpp
    src/MovieDataSet.cpp
    src/main.cpp
)

# If you have any libraries to link, you can use target_link_libraries
# For example:
# target_link_libraries(run PRIVATE some_library)
