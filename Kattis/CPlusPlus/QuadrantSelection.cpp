#include <iostream>

int main() {
    int x, y;

    std::cin >> x >> y;

    if (x > 0 && y > 0) {
        std::cout << 1 << std::endl;
    } else if (x > 0 && y < 0) {
        std::cout << 4 << std::endl;
    } else if (x < 0 && y > 0) {
        std::cout << 2 << std::endl;
    } else {
        std::cout << 3 << std::endl;
    }

    system("PAUSE");
    return 0;
}