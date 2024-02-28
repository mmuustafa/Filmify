#include <iostream>
#include <string>
#include "../header/inputoutput.h"
#include "../header/MovieMethods.h"
#include "../header/Movie.h"

using namespace std;

int main() {
    inputOutput io;
    int option;
    string movieName;

    
    option =  io.outputWelcomeMessage();

    if (option ==  1) {
        cout << "Please enter the name of the movie you want to search for: " << endl;
        cin >> movieName;
        cout << endl; 
    }
    

    return 0;
}