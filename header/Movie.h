#ifndef MOVIE_H
#define MOVIE_H

#include <vector>
#include <string>

using namespace std;

class Movie {

    private:
    string movieName;
    string actor;
    string genre;
    string director;
    double rating;
    int year;


    public:
    Movie(string, string, string, string, double, int);
    string getMovieName();
    string getActor();
    string getGenre();
    string getDirector();
    double getRating();
    int getYear(); 


};

#endif
