#include <iostream>

int main() {
    int a, b, result;
    std::cin >> a >> b;
    
    result = (a > b) ? 1 : 0;
    std::cout << result << std::endl;

    exit(EXIT_SUCCESS);
    std::cin.get();
}
