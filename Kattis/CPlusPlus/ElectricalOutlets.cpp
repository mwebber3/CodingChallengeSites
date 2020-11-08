#include <iostream>

int main() {
    int testCases, powerStrips, i, j, total = 0;

    std::cin >> testCases;

    for (i = 0; i < testCases; i++) {
        std::cin >> powerStrips;

        for (j = 0; j < powerStrips; j++) {
            int outlets[powerStrips];
            std::cin >> outlets[j];
            total += outlets[j];
        }
        std::cout << (total - (powerStrips - 1)) << std::endl;
        total = 0;
    }

    return 0;
}
