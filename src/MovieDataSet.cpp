#include "../header/MovieDataSet.h"
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<cassert>
#include<vector>

using namespace std;

vector<Movie> MovieDataSet:: generateListOfMovies()
{
    vector<Movie> fillMovies;
    ifstream infs("../lib/movies.csv");

    if (!infs.is_open())
    {
        cout << "Could not open file!" << endl;
        return fillMovies; //return empty vector
    }

    string spaceLine;
    while (getline(infs,spaceLine))
    {
        stringstream iss(spaceLine);
        Movie movieObj;

        getline(iss, movieObj.movieName, ',');
        getline(iss, movieObj.actor, ',');
        getline(iss, movieObj.genre, ',');
        getline(iss, movieObj.director, ',');
        getline(iss, movieObj.rating, ',');
        iss >> movieObj.year;

        iss.ignore();

        fillMovies.push_back(movieObj);

    }

    infs.close();
    return fillMovies;
}