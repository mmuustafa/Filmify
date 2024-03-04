#ifndef MOVIEDATASET_H
#define MOVIEDATASET_H

#include "Movie.h"
#include <vector>
#include <string>

using namespace std;

class MovieDataSet {
public:
    MovieDataSet(const string& filePath); // Constructor that accepts a file path
    vector<Movie> generateListOfMovies();

private:
    string csvFilePath; // Member variable to store the file path
};

#endif
