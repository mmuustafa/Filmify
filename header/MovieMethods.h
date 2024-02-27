#ifndef MOVIESMETHODS_H
#define MOVIESMETHODS_H

#include "Movie.h"

using namespace std;

class MovieMethods {

    private:
    vector<Movie> reccomendedMovies;
    vector<Movie> everyMovieEver;

    public:
    MovieMethods();
    Movie GetMovie(string );
    void SortByAlphabetical();
    void SortByRating();
    void SortByYear();
    void PrintAllGenres();
    void PrintFinalListOfReccs();
    void CreateReccs(int ); //will create reccs based on actor, genre, director. Will call the helper functions based on Int input for
    //1 is movie name, 2 is actor, 3 is genre, 4 is director

    private:
    void CreateReccsBasedOnMovieName(string );
    void CreateReccsBasedOnActor(string );
    void CreateReccsBasedOnGenre(string );
    void CreateReccsBasedOnDirector(string );


};






#endif