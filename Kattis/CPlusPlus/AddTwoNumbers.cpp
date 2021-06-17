#include <iostream>
#include <cstdlib>

bool validate(int, int);

int main() {
    int a, b;
    std::cin >> a >> b;

    if (validate(a, b) == false) {
        exit(EXIT_FAILURE);
    }

    std::cout << (a + b) << std::endl;

    exit(EXIT_SUCCESS);
    std::cin.get();
}

// Function: Validate
// Variable(s): Receives user input from main function
// Output: Boolean value 
// Purpose: Validates user input before continuing 

bool validate (int a, int b) {
    bool valid = true;

    if (a < 0 || b < 0 || a > 1000000 || b > 1000000) {
        std::cout << "Not a valid number." << std::endl;
        valid = false;
    }
    return valid;
}
