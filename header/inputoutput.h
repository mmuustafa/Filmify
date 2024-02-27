#ifndef INPUTOUTPUT_H
#define INPUTOUTPUT_H

#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"
// #include "MovieMethods.h"

using namespace std;

class inputOutput {
public:
    int outputWelcomeMessage();
    int outputClosingMessage();
    std::vector<std::string> outputListOfActors();
    std::vector<std::string> outputListOfDirectors();
    std::vector<std::string> outputListOfGenre();
    std::string outputBasedOnGenre(Movie& movie);
    std::string outputBasedOnActor(Movie& movie);
    std::string outputBasedOnDirector(Movie& movie);
    int InputUserMenuOptions();
    std::string InputUserActorRec(Movie& movie);
    std::string InputUserGenreRec(Movie& movie);
    std::string InputUserDirectorRec(Movie& movie);
    std::string InputUserNameDirectorRec(Movie& movie);
    int InputUserChoiceAgain();
    int InputUserSortingDecision();
    void PrintSortedOptions(int option);
    void printMenu();
};




#endif