CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(tests/googletest)

add_library(simpleLibrary
src/inputoutput.cpp
src/MovieMethods.cpp
src/MovieDataSet.cpp
src/Movie.cpp
)

ADD_EXECUTABLE(tests
  src/test.cpp
)

TARGET_LINK_LIBRARIES(tests gtest)
TARGET_COMPILE_DEFINITIONS(tests PRIVATE gtest_disable_pthreads=ON)