#ifndef MOVIESMETHODS_H
#define MOVIESMETHODS_H

#include "Movie.h"
#include "MovieDataSet.h"
#include <algorithm> // For transform function
#include <cctype> // For tolower function

using namespace std;

class MovieMethods {

    private:
    vector<Movie> reccomendedMovies;
    vector<Movie> everyMovieEver;

    public:
    MovieMethods();
    Movie GetMovieName(string );
    void SortByAlphabetical();
    void SortByRating();
    void SortByYear();
    void PrintAllGenres();

    int PrintFinalListOfReccs(int );
    int PrintFinalListOfReccsForSorts(int );

    bool isDirectorReal(string );
    bool isActorReal(string );
    void setMovieDataSet(const MovieDataSet& mds);

    
    void CreateReccsBasedOnMovieName(string );
    void CreateReccsBasedOnActor(string );
    void CreateReccsBasedOnGenre(string );
    void CreateReccsBasedOnDirector(string );
    
    void PushBackforTesting(Movie reccMovie);
    Movie getallMoviesmovieForTesting(int i);
    Movie getMovieTesting(int i);
    int sizeofRecommendedForTesting();
};


#endif