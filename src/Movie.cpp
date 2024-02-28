#include "../header/Movie.h"

// Existing constructors
Movie::Movie() {
    movieName = "";
    actor = "";
    genre = "";
    director = "";
    rating = 0.0;
    year = 0;
}

Movie::Movie(string filmName, string actorName, string genreName, string direcName, double rate, int yr) {
    movieName = filmName;
    actor = actorName;
    genre = genreName;
    director = direcName;
    rating = rate;
    year = yr;
}

// Existing getters
string Movie::getMovieName() { return movieName; }
string Movie::getActor() { return actor; }
string Movie::getGenre() { return genre; }
string Movie::getDirector() { return director; }
double Movie::getRating() { return rating; }
int Movie::getYear() { return year; }

// Setter methods
void Movie::setMovieName(string name) {
    movieName = name;
}

void Movie::setActor(string name) {
    actor = name;
}

void Movie::setGenre(string name) {
    genre = name;
}

void Movie::setDirector(string name) {
    director = name;
}

void Movie::setRating(double rate) {
    rating = rate;
}

void Movie::setYear(int yr) {
    year = yr;
}