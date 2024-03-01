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
        //movieMethods.PrintAllMovies();
        // implement functionality to search for and display the movie by name
    } 
    
    else if (option == 2) {
        // Print all genres
        int option1 = 0;
        cout << "Do you have a certain genre on mind that you like reccomendations based on? If so type 1 to type it in." << endl;
        cout << "If not, Would you like to see a list? type 2 to see a list." << endl;
        string userGenre;
        cin >> option1;
            if (option1 == 1)
            {
                cout << "Great, enter in the genre!" << endl;
                userGenre = io.manageGenreReccs(movieMethods);
                movieMethods.CreateReccsBasedOnGenre(userGenre);
                //INSERT FUNCTION TO OUTPUT THE MOVIES HERE
                cout << "Great!, here is your list of reccomendations based on your desired genre." << endl;
            }
            else if ( option1 == 2)
            {
            movieMethods.PrintAllGenres();
            cout << endl;
            cout << "Here is your list of genres!" << endl;
            cout << "Choose a genre and we'll develop a list of movies for your choosing based on your desired genre." << endl;
            cin >>userGenre;
            //INSERT FUNCTION TO OUTPUT THE MOVIES HERE
            cout << endl;
            cout << "Great!, here is your list of reccomendations based on your desired genre." << endl;
            }
    } 
    
    else if (option == 3) {
        string actorName;
        cout << "Please enter the name of the actor you're interested in: " << endl;
        cin >> actorName;
        // implement functionality to search for and display movies by actor
    } 
    
    else if (option == 4) {
        string directorName;
        cout << "Please enter the name of the director you're interested in: " << endl;
        cin >> directorName;
        // implement functionality to search for and display movies by director
    }

    movieMethods.PrintFinalListOfReccs(0);
    
    
    
    return 0;
}
