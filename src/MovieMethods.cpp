#include "../header/MovieMethods.h"
#include "../header/MovieDataSet.h"
#include "../header/Movie.h"
#include <iostream>

MovieMethods::MovieMethods() {
    MovieDataSet mds;
    everyMovieEver = mds.generateListOfMovies();
}

void MovieMethods::PrintAllGenres() {
    vector<string> genres;
    for (int i = 0; i < everyMovieEver.size(); i++) {
        if (find(genres.begin(), genres.end(), everyMovieEver[i].getGenre()) == genres.end()) {
            genres.push_back(everyMovieEver[i].getGenre());
        }
    }
    for (int i = 0; i < genres.size(); i++) {
        cout << genres[i] << endl;
    }
}
