#include "MovieDataSet.h"
#include <fstream>
#include <sstream>
#include <iostream> 
using namespace std;

vector<Movie> MovieDataSet::generateListOfMovies() {
    vector<Movie> movies;
    ifstream file("Movies.csv");

    string line;
    // Skip the header line
    getline(file, line);

    while (getline(file, line)) {
        stringstream ss(line);
        string name, genre, director, star, temp;
        int year;
        double score;
        float votes;

        // Extract each piece of data by splitting the line
        getline(ss, name, ',');
        getline(ss, genre, ',');
        getline(ss, temp, ',');
        year = stoi(temp);
        getline(ss, temp, ',');
        score = stod(temp);
        getline(ss, temp, ',');
        votes = stof(temp); // Adjust based on your class definition
        getline(ss, director, ',');
        getline(ss, star);

        // Create a Movie object and add it to the vector
        Movie movie(name, star, genre, director, score, year);
        movies.push_back(movie);
    }

    return movies;
}