#include <iostream>

int main() {
    int input;

    std::cin >> input;

    if (input % 2 == 0) {
        std::cout << "Bob" << std::endl;
    } else {
        std::cout << "Alice" << std::endl;
    }

    system("PAUSE");
    return 0;
}