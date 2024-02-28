#include "../header/Movie.h"

Movie::Movie() {
    movieName = "";
    actor = "";
    genre = "";
    director = "";
    rating = 0.0;
    year = 0;
}
Movie::Movie(string filmName, string actorName, string genreName, string direcName, double rate, int yr)
{
    movieName = filmName;
    actor = actorName;
    genre = genreName;
    director = direcName;
    rating = rate;
    year = yr;
}
string Movie :: getMovieName() { return movieName;}

string Movie ::getActor() { return actor;}

string Movie :: getGenre() {return genre;}

string Movie :: getDirector() {return director;}

double Movie :: getRating() {return rating;}

int Movie :: getYear() { return year;}