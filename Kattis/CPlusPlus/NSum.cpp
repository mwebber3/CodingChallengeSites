#include <iostream>

bool validate(int);

int main() {
    int a, b, i, total = 0;
    std::cin >> a;

    if (validate(a) == false) {
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < a; i++) {
        std::cin >> b;
        total = (total + b); 
    }

    std::cout << total << std::endl;

    exit(EXIT_SUCCESS);
    std::cin.get();
}

// Function: Validate
// Variable(s): Receives user input from main function
// Output: Boolean value 
// Purpose: Validates user input before continuing 

bool validate (int a) {
    bool valid = true;

    if (a < 2 || a > 10) {
        std::cout << "Not a valid number." << std::endl;
        valid = false;
    }
    return valid;
}
