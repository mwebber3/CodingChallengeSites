#include <iostream>
#include <cstdlib>

bool validateInput (int);

int main() {
    int i, j, temp, length, input[length];
    
    std::cin >> length;

    for (i = 0; i < length; i++) {
        std::cin >> input[i];

        if (validateInput(input[i]) == false) {
            exit(EXIT_FAILURE);
        }
    }

    for (j = (length - 1); j >= 0; j--) {
        std::cout << input[j] << std::endl;
    }

    exit(EXIT_SUCCESS);
    std::cin.get();
}

bool validateInput (int input) {
    bool valid = true;

    if (input < 1 || input > 100000) {
        std::cout << "Not a valid number." << std::endl;
        valid = false;
    }
    return valid;
}
