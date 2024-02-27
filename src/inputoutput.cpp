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
        if (option > 0 && option < 5) {
            break;
        }
        cout << "Please enter a valid option." << endl;
    }
    cout << endl;
    return option;
}