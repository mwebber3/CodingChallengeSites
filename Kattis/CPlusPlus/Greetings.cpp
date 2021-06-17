#include <iostream>
#include <algorithm>
#include <cstdlib> 

bool validate (std::string);

int main() {
    int i;
    char character;
    std::string input, output;
    std::cin >> input;
    
    if (validate(input) == false) { 
        exit(EXIT_FAILURE); 
    }

    for (i = 0; i < input.length(); i++) {
        character = input.at(i);

        if (character == 101) { //ascii decimal code for 'e'
            output += "ee";
        }
    }

    std::cout << 'h' << output << 'y' << std::endl;
    exit(EXIT_SUCCESS); 
    std::cin.get(); // universal way of pausing code
}

// Function: Validate
// Variable(s): Receives user input from main function
// Output: Boolean value 
// Purpose: Validate user input before continuing 

bool validate (std::string input) {
    bool valid = true;

    if (input.length() < 3 || input.length() > 1000) {
        std::cout << "Not a valid input." << std::endl;
        valid = false;
    }
    return valid;
}
