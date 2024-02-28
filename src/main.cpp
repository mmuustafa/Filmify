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
    Movie desiredMovie;
    
    option =  io.outputWelcomeMessage();

    if (option ==  1) {
        cout << "Please enter the name of the movie you want to search for: " << endl;
        cin >> movieName;
        cout << endl;
        desiredMovie.setMovieName(movieName); 
    }
    cout << desiredMovie.getMovieName() << endl; // Debugging purposes
    

    return 0;
}