#include <iostream>
#include <string>
#include "../header/inputoutput.h"
#include "../header/MovieMethods.h"
#include "../header/Movie.h"
#include "../header/MovieDataSet.h"

using namespace std;

int main() {
    inputOutput io;
    MovieMethods movieMethods;
    int option;
    
    // Display welcome message and get user option
    option = io.outputWelcomeMessage();

    // Assuming MovieMethods is already set up to have a list of movies
    if (option == 1) {
        string movieName;
        cout << "Please enter the name of the movie you want to search for: " << endl;
        cin >> movieName; // Consider using getline(cin, movieName) if movie names can have spaces
        cout << "Searching for: " << movieName << endl;
        // implement functionality to search for and display the movie by name
    } else if (option == 2) {
        // Print all genres
        movieMethods.PrintAllGenres();
    } else if (option == 3) {
        string actorName;
        cout << "Please enter the name of the actor you're interested in: " << endl;
        cin >> actorName;
        // implement functionality to search for and display movies by actor
    } else if (option == 4) {
        string directorName;
        cout << "Please enter the name of the director you're interested in: " << endl;
        cin >> directorName;
        // implement functionality to search for and display movies by director
    }
    
    
    return 0;
}
