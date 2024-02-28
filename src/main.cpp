#include <iostream>
#include <string>
#include "../header/inputoutput.h"
#include "../header/MovieMethods.h"

using namespace std;

int main() {
    inputOutput io; // Create an instance of inputOutput class
    int option = io.outputWelcomeMessage(); // Call the function on the instance

    // Now you can use the 'option' variable in your code
    // ...

    return 0;
}