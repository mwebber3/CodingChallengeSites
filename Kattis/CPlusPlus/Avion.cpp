#include <iostream>

int main() {
    int rows = 6;
    bool found = false;
    std::string registrationCode;

    for (int i = 1; i < rows; i++) {
        std::cin >> registrationCode;
        if (registrationCode.find("FBI") != std::string::npos) {
            std::cout << i << " ";
            found = true;
        }
    }

    if (found == false) {
        std::cout << "HE GOT AWAY!" << std::endl;
    }

    return 0;
}
