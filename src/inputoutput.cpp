#include <iostream>
#include "../header/inputoutput.h"

using namespace std;

int inputOutput::outputWelcomeMessage() {
    cout << "Welcome to Filimify" << endl;
    cout << "We are here to help you find the best movie for you." << endl;
    cout << "Please enter on what attributes you want your recommended movie to be based on:" << endl;
    cout << "1. Name\n"
         << "2. Genre\n"
         << "3. Starring actor\n"
         << "4. Director" << endl;
    
    int option;
    while (true) {
        cin >> option;
        if (option > 0 && option < 5) { // if option is not between 1 and 4, ask break?
            break;
        }
        cout << "Please enter a valid option." << endl;
    }
    cout << endl;
    return option;
}

int inputOutput::outputClosingMessage() {
    int decision = 0;
    int runAgain = 0;
    cout << "Thank you for using Filmify!" << endl;
    cout << "Are you satisfied with your film suggestion?" << endl;
    cout << "type 1 for yes and 2 for no" << endl;
    cin >> decision;
    if (decision == 1) {
        cout << "we are happy to hear that, enjoy your movie!" << endl;
        return 0; 
    } else if(decision == 2) {
        cout << "we are sorry to hear that, would you like to run the program again?" << endl;
        cout << "type 1 for yes and 2 for no" << endl;
        cin >> runAgain;

        if(runAgain == 1) {
            outputWelcomeMessage();
            return 1; 
        } else if(runAgain == 2) {
            cout << "Thank you for using Filmify, hope to see you again soon!" << endl;
            return 0; 
        }
    } else {
        cout << "not a valid option, please choose a different value";
    }
    return -1; 
}


string inputOutput:: manageGenreReccs(MovieMethods& genreMethod)
{
    vector<string> genres;
    genres.push_back("Drama"); 
    genres.push_back("Adventure");
    genres.push_back("Action");
    genres.push_back("Comedy");
    genres.push_back("Horror");
    genres.push_back("Biography");
    genres.push_back("Crime");
    genres.push_back("Western");
    genres.push_back("Fantasy");
    genres.push_back("Animation"); 
    genres.push_back("Thriller");
    genres.push_back("Romance");
    genres.push_back("Mystery");
    genres.push_back("Sci-Fi");
    genres.push_back("Sport");
    genres.push_back("Musical");

    string userGenre = "";
    cin >> userGenre;

    while(1)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Please enter a valid option" << endl;
            cin >> userGenre;
        }
        if(!cin.fail())
        {
            // iterate through genre list and check if userGenre is in list
            for (unsigned int i = 0; i < genres.size(); ++i)
            {
                if (userGenre == genres.at(i))
                {
                    cout << endl << endl;
                    return userGenre;
                }
            }
            cout << "Please enter a valid option" << endl;
            cin >> userGenre;
        }
    }
     // returns the genre the user chose for recommendation
     return userGenre;
}

 string inputOutput:: manageMovieNameReccs(MovieMethods& MovieNameMethod)
 {
    string nameOfMovie;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin, nameOfMovie);
    cout << endl;
    while(1)
    {
        if(cin.fail())
        {
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cin.clear();
            cout << "Movie not found!" << endl;
            cout << "Enter a movie name for a similar movie recommendation" << endl;
            getline(cin, nameOfMovie);
            cout << endl;
        }
        if(!cin.fail())
        {
            Movie currMovie = MovieNameMethod.GetMovieName(nameOfMovie);
            if (currMovie.getMovieName() != "Not found!")
            {
                break;
            }
            cout << "Movie not found!" << endl;
            cout << "Enter a movie name for a similar movie recommendation" << endl;
            getline(cin, nameOfMovie);
            cout << endl;
        }
    }
    return nameOfMovie;

 }
//tring inputOutput:: manageDirectorReccs(MovieMethods& directoMethod);

string inputOutput:: manageActorReccs(MovieMethods& actorMethod)
{
    string actor = "";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin, actor);
    cout << endl;
    while(true)
    {
        if(cin.fail())
        {
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cin.clear();
            cout << "Actor not found!" << endl;
            cout << "Enter an actor (full name) to get a recommendation on movies they starred in" << endl;
            getline(cin, actor);
            cout << endl;
            
        }
        if(!cin.fail())
        {
            if (actorMethod.isActorReal(actor))
            {
                break;
            }
            cout << "Actor not found!" << endl;
            cout << "Enter an actor (full name) to get a recommendation on movies they starred in" << endl;
            getline(cin, actor);
            cout << endl;
            
        }
    }
    return actor;
}

string inputOutput:: manageDirectorReccs(MovieMethods& directorMethod)
{
    string director = "";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin, director);
    cout << endl;
    while(true)
    {
        if(cin.fail())
        {
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cin.clear();
            cout << "Actor not found!" << endl;
            cout << "Enter an actor (full name) to get a recommendation on movies they starred in" << endl;
            getline(cin, director);
            cout << endl;
            
        }
        if(!cin.fail())
        {
            if (directorMethod.isDirectorReal(director))
            {
                break;
            }
            cout << "director not found!" << endl;
            cout << "Enter a director (full name) to get a recommendation on movies they starred in" << endl;
            getline(cin, director);
            cout << endl;
            
        }
    }
    return director;
}

int inputOutput:: InputUserChoiceAfterReccs()
{
    int option = 3;

    cout << "Now that you have your options, would you like to see more reccomendations, sort your list, or use the current reccomendations provided" << endl;
    cout << "type 1 to see more reccomendations" << endl;
    cout << "type 2 for sort" << endl;
    cout << "type 3 to quit " << endl;

    cin >>option;

    while (true)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Please enter a valid option" << endl;
            cin >> option;
        }
        else if (!cin.fail())
        {
            if (option > 0 && option < 4)
            {
                break;
            }
            else
            {
                cout << "Please enter a valid option" << endl;
                cin >> option;
            }
        }
    }
    cout << endl;
    return option;
}

int inputOutput:: InputUserChoiceSorts()
{
    int option = 1;

    cout << "Awesome!, Let's get started with how you would like to sort your list." << endl;
    cout << "1. Alphabetical order" << endl;
    cout << "2. Recent to oldest" << endl;
    cout << "3. Rating" << endl;

    cin >> option;

    while(true)
    {
         if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Please enter a valid option" << endl;
            cin >> option;
        }
        else if (!cin.fail())
        {
            if (option > 0 && option < 4)
            {
                break;
            }
            else
            {
                cout << "Please enter a valid option" << endl;
                cin >> option;
            }
        }
    }
    cout << endl;
    return option;
}
    

