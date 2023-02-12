#include <iostream>

bool verifyInput(int, int);

int main() {
    int a, b;
    std::cin >> a >> b;
    
    if (verifyInput(a, b) == false) {
        std::cout << "Please re-enter value." << std::endl;
    } else {
        std::cout << (a + b) << std::endl;
    }
    
    exit(EXIT_SUCCESS);
    std::cin.get();
}

bool verifyInput(int a, int b) {
    bool result = (a < 0 || a > 1000 || b < 0 || b > 1000) ? false : true;
    return result;
}
