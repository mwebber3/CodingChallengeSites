#include <iostream>
#include <vector>

int main() {
    int xyn[3];

    for (int i = 0; i < 3; i++) {
        std::cin >> xyn[i];
    }

    for (int j = 1; j <= xyn[2]; j++) {
        if (j % xyn[0] == 0 && j % xyn[1] == 0) {
            std::cout << "FizzBuzz" << std::endl;
        } else if (j % xyn[0] == 0) {
            std::cout << "Fizz" << std::endl;
        } else if (j % xyn[1] == 0) {
            std::cout << "Buzz" << std::endl;
        } else {
            std::cout << j << std::endl;
        }
    }

    system("PAUSE");
    return 0;
}