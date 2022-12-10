#include <iostream>
#include <cstdlib>

bool validate(int, int, int);

int main() {
    int eyes, nose, mouth, combinations;
    std::cin >> eyes >> nose >> mouth;

    if (validate(eyes, nose, mouth) == false) {
        exit(EXIT_FAILURE);
    }

    std::cout << (eyes * nose * mouth) << std::endl; 
    exit(EXIT_SUCCESS);
    std::cin.get();
}

bool validate(int a, int b, int c) {
    bool valid = true;

    if (a < 0 || a > 500 || b < 0 || b > 500 || c < 0 || c > 500) {
        std::cout << "Not a valid number." << std::endl;
        valid = false;
    }
    return valid;
}
