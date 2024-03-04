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
    string fileName = "../movieCSV/movies.csv";

vector<Movie> MovieDataSet::generateListOfMovies() const {
    vector<Movie> movies;
    ifstream file(csvFilePath); 

    if (!file) {
        cerr << "Unable to open file: " << csvFilePath << endl;
        return movies; // Return an empty vector or handle the error as you see fit
    }

    string line;
    getline(file, line); // Skip the header line

    while (getline(file, line)) {
        string movName, actor1, genre1, director1, tempString;
        double rating1;
        int year1;

        stringstream iss(line);

        getline(iss, movName, ',');
        if (movName.at(0) == '\"') {
            movName += ",";
            getline(iss, tempString, '\"');
            movName += tempString;
            // Remove the quote at the beginning from the name
            movName = movName.substr(1, movName.size() - 1);
            // Clear stream to allow for genre to be read
            getline(iss, tempString, ',');
        }

        getline(iss, genre1, ',');
        getline(iss, tempString, ',');
        year1 = atoi(tempString.c_str()); // Convert string to int
        getline(iss, tempString, ',');
        rating1 = atof(tempString.c_str()); // Convert string to double
        getline(iss, director1, ',');
        getline(iss, actor1, ',');

        Movie movieFill(movName, actor1, genre1, director1, rating1, year1);
        movies.push_back(movieFill);
    }

    file.close();
    return movies;
}
