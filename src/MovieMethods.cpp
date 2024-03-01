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


void MovieMethods:: CreateReccsBasedOnGenre(string specGenre)
{
    //cin >> specGenre;
    for (int i = 0; i < everyMovieEver.size(); ++i) {
        if (everyMovieEver.at(i).getGenre() == specGenre) {
            reccomendedMovies.push_back(everyMovieEver.at(i));
        }
    }
    
}

void MovieMethods:: CreateReccsBasedOnMovieName(string specMovieName)
{
    for (int i = 0; i < everyMovieEver.size(); ++i) {
        if (everyMovieEver.at(i).getMovieName() == specMovieName) {
            reccomendedMovies.push_back(everyMovieEver.at(i));
        }
    }
}
//void CreateReccsBasedOnActor(string );
//void CreateReccsBasedOnDirector(string );

int MovieMethods:: PrintFinalListOfReccs(int num)
{
    int movieCounter = 0;
    bool atLeastOneMovie = false;
    cout << endl;
    int i = num*10;
    int endi = i+10;
    for(int i = num*10;i<endi&&i<reccomendedMovies.size();i++) {
        ++movieCounter;
        atLeastOneMovie = true;
        cout<<reccomendedMovies.at(i).getMovieName()<<'\n';
    }
    if (!atLeastOneMovie)
    {
        cout << "No movies found!" << endl;
    }
    cout << endl;
    return movieCounter;
}




