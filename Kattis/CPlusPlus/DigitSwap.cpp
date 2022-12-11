#include <iostream>
#include <cstdlib>

bool validate(int);

int main() {
    int number, remainder, reversed = 0;
    std::cin >> number;

    if (validate(number) == false) {
        exit(EXIT_FAILURE);
    }

    while (number != 0) {
        remainder = (number % 10);
        reversed = (reversed * 10 + remainder);
        number = (number / 10);
    }
    std::cout << reversed << std::endl; 
    exit(EXIT_SUCCESS);
    std::cin.get();
}

bool validate(int i) {
    bool valid = true;

    if (i < 10 || i > 99) {
        std::cout << i << " is not a valid number." << std::endl;
        valid = false;
    }
    return valid;
}
