#include <iostream>

int main() {
    int testCaseAmount;
    double a, b, c;
    std::cin >> testCaseAmount;

    for (int i = 0; i < testCaseAmount; i++) {
        std::cin >> a >> b >> c;

        if ((a + b) == c) {
            std::cout << "Possible" << std::endl;
        } else if ((a - b) == c || (b - a) == c) {
            std::cout << "Possible" << std::endl;
        } else if ((a / b) == c || (b / a) == c) {
            std::cout << "Possible" << std::endl;
        } else if ((a * b) == c) {
            std::cout << "Possible" << std::endl;
        } else {
            std::cout << "Impossible" << std::endl;
        }
    }

    exit(EXIT_SUCCESS);
    std::cin.get();
}