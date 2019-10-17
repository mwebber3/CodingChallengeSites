#include <iostream>

int main() {
    std::cout << "Sum of all the multiples of 3 or 5 below 1000" << std::endl;

    int sum = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum = (sum + i);
        }
    }

    std::cout << "The result is: " << sum << std::endl;

    return 0;
}
