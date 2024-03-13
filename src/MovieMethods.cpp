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
void MovieMethods:: CreateReccsBasedOnActor(string specActor)
{
    for (int i = 0; i < everyMovieEver.size(); ++i) {
        if (everyMovieEver.at(i).getActor() == specActor) {
            reccomendedMovies.push_back(everyMovieEver.at(i));
        }
    }
}
void MovieMethods:: CreateReccsBasedOnDirector(string specDirector)
{
    for (int i = 0; i < everyMovieEver.size(); ++i) {
        if (everyMovieEver.at(i).getDirector() == specDirector) {
            reccomendedMovies.push_back(everyMovieEver.at(i));
        }
    }
}

Movie MovieMethods:: GetMovieName(string movie1)
{
    for (int i = 0; i < everyMovieEver.size(); ++i) {
        if (everyMovieEver.at(i).getMovieName() == movie1) {
            return everyMovieEver.at(i);
        }
    }
    string name = "N/A";
    string genre = "N/A";
    string director = "N/A";
    string star = "N/A";
    double rating = 0.0;
    int votes = 0;
    int year = 0;

    Movie nullMovie(name, genre, director, star, rating, year);

    return nullMovie;
}

int MovieMethods:: PrintFinalListOfReccs(int num)
{
    int movieCounter = 0;
    bool atLeastOneMovie = false;
    cout << endl;

    
    int i = num*10;
    int endi = i+10;
    for(int i = num*10;i<endi&&i<this->reccomendedMovies.size();i++) {
        ++movieCounter;
        atLeastOneMovie = true;
        cout<<this->reccomendedMovies.at(i).getMovieName()<<'\n';
    }
    if (!atLeastOneMovie)
    {
        cout << "No movies found!" << endl;
    }
    cout << endl;
    return movieCounter;
}

int MovieMethods::  PrintFinalListOfReccsForSorts(int num )
{
    int movieCounter = 0;
    bool atLeastOneMovie = false;
    cout << endl;

    
    int i = num*10;
    int endi = i+100;
    for(int i = num*10;i<endi&&i<this->reccomendedMovies.size();i++) {
        ++movieCounter;
        atLeastOneMovie = true;
        cout<<this->reccomendedMovies.at(i).getMovieName()<<'\n';
    }
    if (!atLeastOneMovie)
    {
        cout << "No movies found!" << endl;
    }
    cout << endl;
    return movieCounter;
}

bool MovieMethods:: isActorReal(string actorName)
{
    for (unsigned i = 0; i < everyMovieEver.size(); i++)
    {
        if(everyMovieEver.at(i).getActor() ==actorName)
        {
            return true;
        }
    }
    return false;
}

bool MovieMethods:: isDirectorReal(string directorName)
{
    for (unsigned i = 0; i < everyMovieEver.size(); i++)
    {
        if(everyMovieEver.at(i).getDirector() == directorName)
        {
            return true;
        }
    }
    return false;
}

void MovieMethods:: SortByAlphabetical()
{
    vector<string> movieName;
    vector<int> charIndex;
    for (int i = 0; i < this->reccomendedMovies.size(); i++)
    {
        movieName.push_back(this->reccomendedMovies[i].getMovieName());
    }

    vector<string> testName = movieName;
    sort(movieName.begin(), movieName.end());
    

    for (int i=0; i<movieName.size();i++)
    {
        for (int j = 0; j < this->reccomendedMovies.size(); j++)
        {
            if(movieName[i] == this->reccomendedMovies[j].getMovieName())
            {
                charIndex.push_back(j);
                break;
            }
        }

    }
    vector<Movie> newRecommendedList = reccomendedMovies;
    
    for (int i = 0; i < reccomendedMovies.size(); i++)
    {
        this->reccomendedMovies[i]=newRecommendedList[charIndex[i]]; 
    }
}

void MovieMethods::SortByRating() {
    int n = this->reccomendedMovies.size();
    // One by one move boundary of unsorted subarray
    for (int i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i+1; j < n; j++)
            if (this->reccomendedMovies[j].getRating() > this->reccomendedMovies[min_idx].getRating())
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(this->reccomendedMovies[min_idx], this->reccomendedMovies[i]);
    }
}

void MovieMethods::SortByYear(){
    int n = this->reccomendedMovies.size();
    // One by one move boundary of unsorted subarray
    for (int i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i+1; j < n; j++)
            if (this->reccomendedMovies[j].getYear() > this->reccomendedMovies[min_idx].getYear())
                min_idx = j;

        // Swap the found minimum element with the first element
        swap(this->reccomendedMovies[min_idx], this->reccomendedMovies[i]);
    }
}
