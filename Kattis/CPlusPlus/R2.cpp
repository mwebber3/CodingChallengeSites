#include <iostream>
#include <array>

int main() {
    int variables[2];

    for (int i = 0; i < 2; i++) {
        std::cin >> variables[i];
    }
    
    std::cout << ((variables[1] * 2) - variables[0]) << std::endl;

    system("PAUSE");
    return 0;
}