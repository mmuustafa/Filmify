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
        int userOption;
        cout << "Awesome, Please enter the name of the movie you're interested in: " << endl;

        movieName = io.manageMovieNameReccs(movieMethods);

        cout << "Nice, " << movieName << " is a great movie!" << endl;
        cout << endl;
        cout << "Now that we have the name of your movie, on what attributes would you like your reccomendation based on?" << endl;
        cout << "1. Genre of that movie" << endl;
        cout << "2. Starring actor in that movie" << endl;
        cout << "3. Director of that movie" << endl;
        
        Movie userMovie = movieMethods.GetMovieName(movieName);

        cin >> userOption;

        if(userOption == 1)
        {
            cout << "Searching for movies!" << endl;
            movieMethods.CreateReccsBasedOnGenre(userMovie.getGenre());
            //WANT TO OUTPUT THE LIST OF MOVIES THAT ARE BASED ON SAME GENRE AS THAT MOVIE
            cout << endl;
        }
        
        else if (userOption == 2)
        {
            cout << "Searching for movies!" << endl;
            movieMethods.CreateReccsBasedOnActor(userMovie.getActor());
            //WANT TO OUTPUT THE LIST OF MOVIES THAT ARE BASED ON SAME ACTOR
            cout << endl;
        }

        else if (userOption == 3)
        {
            cout << "Searching for movies!" << endl;
            movieMethods.CreateReccsBasedOnDirector(userMovie.getDirector());
            //WANT TO OUTPUT THE LIST OF MOVIES THAT ARE BASED ON SAME DIRECTOR
            cout << endl;
        }
        //movieMethods.CreateReccsBasedOnMovieName(movieName);
        cout << "Great! Here is your list of reccomendations based on the movie you entered!" << endl;
        // implement functionality to search for and display the movie by name
    }
    
    
    else if (option == 2) {
        // Print all genres
        int option1 = 0;
        cout << "Do you have a certain genre in mind that you would like your reccomendations to be based on?" << endl 
             << "If so type 1 to type it in." << endl;
        cout << "If not, Would you like to see a list?" << endl
             << "Type 2 to see a list." << endl;
        string userGenre;
        cin >> option1;
            if (option1 == 1)
            {
                cout << "Great, enter in the genre!" << endl;
                userGenre = io.manageGenreReccs(movieMethods);
                movieMethods.CreateReccsBasedOnGenre(userGenre);
                //INSERT FUNCTION TO OUTPUT THE MOVIES HERE
                cout << "Good choice! you can never go wrong with a " << userGenre << " movie." << endl;
                cout << "Great! Here is your list of reccomendations based on your choice of " << userGenre << endl;
            }
            else if ( option1 == 2)
            {
            movieMethods.PrintAllGenres();
            cout << endl;
            cout << "Here is your list of genres!" << endl;
            cout << "Choose a genre and we'll develop a list of movies for your choosing based on your desired genre." << endl;
            userGenre = io.manageGenreReccs(movieMethods);
            movieMethods.CreateReccsBasedOnGenre(userGenre);
            cout << "Good choice! Glad we can help you in your process of choosing " << userGenre << " as your genre." << endl;
            cout << "Great! Here is your list of reccomendations based on your choice of " << userGenre << endl;
            }
    } 
    
    else if (option == 3) {
        string actorName;
        cout << "Awesome, Please enter the name of the actor you're interested in: " << endl;
        actorName = io.manageActorReccs(movieMethods);
        movieMethods.CreateReccsBasedOnActor(actorName);
        // implement functionality to search for and display movies by actor
        cout <<"Great choice, " << actorName << " is a great actor, here are their movies!" << endl;
    } 
    
    else if (option == 4) {
        string directorName;
        cout << "Awesome, Please enter the name of the director you're interested in: " << endl;
        directorName = io.manageDirectorReccs(movieMethods);
        movieMethods.CreateReccsBasedOnDirector(directorName);
        cout << "What a choice! " << directorName << " has directed many great movies, here are their movies!" << endl;
        // implement functionality to search for and display movies by director
    }

    movieMethods.PrintFinalListOfReccs(0);
    
    return 0;
}
