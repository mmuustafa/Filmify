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

    ifstream infs(fileName);
    assert(infs);
    string line = "";
    getline(infs, line); // empty header line
    
    line = "";

    if (!infs.is_open())
    {
        cout << "Could not open file!" << endl;
        return fillMovies; //return empty vector
    }

    while (getline(infs,line))
    {
        string movName;
        string actor1;
        string genre1;
        string director1;
        double rating1;
        int year1;
        string tempString;

        stringstream iss(line);
        
        getline(iss, movName , ',' );

        if (movName.at(0) == '\"') 
        {   
              movName += ",";
              getline(iss, tempString, '\"');
              movName += tempString;
              // remove the quote at the beginning from the name
              movName = movName.substr(1, movName.size() - 1);
              // clear stream to allow for genre to be read
              getline(iss, tempString, ',');
        }

        getline(iss, genre1, ',');

        getline(iss, tempString, ',');

        // convert string to int when needed
        year1 = atoi(tempString.c_str());
        getline(iss, tempString, ',');

        // convert string to double
        rating1 = atof(tempString.c_str());
        getline(iss, tempString, ',');

       // votes = atoi(tempString.c_str());

        getline(iss, director1, ',');

        getline(iss, actor1, ',');


        Movie movieFill(movName, actor1, genre1, director1, rating1, year1);
        //iss.ignore();

        fillMovies.push_back(movieFill);

        line = "";

    }
    return fillMovies;

}