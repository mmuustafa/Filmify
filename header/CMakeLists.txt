add_library(simpleLibrary
  inputoutput.cpp
  MovieMethods.cpp
  MovieDataSet.cpp
  Movie.cpp
)

find_library(M_LIB m)
target_link_libraries(simpleLibrary ${M_LIB})