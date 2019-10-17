#include <iostream>

int main(void) {
    int fib = 0;
    int sum = 2;
    int i = 1;
    int j = 2;

    while (fib < 4000000) {
        std::cout << fib << std::endl;
        fib = i + j;
        i = j;
        j = fib;

        if (fib % 2 == 0) {
            sum += fib;
        }
    }

    std::cout << sum << std::endl;
    return 0;
}
