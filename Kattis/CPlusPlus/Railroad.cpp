#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;

    if (y % 2 == 0) {
        std::cout << "possible" << std::endl;
    } else {
        std::cout << "impossible" << std::endl;
    }

    return 0;
}