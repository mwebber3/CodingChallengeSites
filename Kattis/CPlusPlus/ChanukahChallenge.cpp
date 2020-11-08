#include <iostream>

int main() {
    int testCases, days, candles, total, i, j;
    std::cin >> testCases;

    for (i = 0; i < testCases; i++) {
        std::cin >> days >> candles;

        for (j = candles; j > 0; j--) {
            total += j;
        }
        total = total + candles;
        std::cout << days << " " << total << std::endl;
        total = 0;
    }

    return 0;
}
