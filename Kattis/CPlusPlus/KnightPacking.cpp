#include <iostream>

int main() {
    int input;
    std::string result;
    std::cin >> input;
    
    result = (input % 2 == 0) ? "second" : "first";
    std::cout << result << std::endl;

    exit(EXIT_SUCCESS);
    std::cin.get();
}
