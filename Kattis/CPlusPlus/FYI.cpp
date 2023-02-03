#include <iostream>

int main() {
    std::string input, result;
    std::cin >> input;
    
    result = (input.substr(0, 3) == "555") ? "1" : "0";
    std::cout << result << std::endl;

    exit(EXIT_SUCCESS);
    std::cin.get();
}
