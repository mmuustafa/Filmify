CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(tests/googletest)

ADD_EXECUTABLE(testss
    tests/test.cpp
    src/inputoutput.cpp
    src/MovieDataSet.cpp
    src/MovieMethods.cpp
    src/Movie.cpp
    
)

TARGET_LINK_LIBRARIES(testss gtest)
TARGET_COMPILE_DEFINITIONS(testss PRIVATE gtest_disable_pthreads=ON)