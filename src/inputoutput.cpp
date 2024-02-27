#include <iostream>
#include "header/inputoutput.h"

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
    if (decision = 1) {
        cout << "we are happy to hear that, enjoy your movie!" << endl;
    }
    else if(decision = 2) {
        cout << "we are sorry to hear that, would you like to run the program again?" << endl;
        cout << "type 1 for yes and 2 for no" << endl;
        cin >> runAgain; 

        if(runAgain= 1) {
            outputWelcomeMessage();
        }
        else if(runAgain = 2) {
            "Thank you for using Filmify, hope to see you again soon!";
        }
    }
    else {
        cout << "not a valid option, please choose a different value";
    }
}