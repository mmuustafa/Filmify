#ifndef MOVIEDATASET_H
#define MOVIEDATASET_H

#include "Movie.h"
#include <vector>
#include <string>

using namespace std;

class MovieDataSet {
public:
    vector<Movie> generateListOfMovies();
};

#endif
