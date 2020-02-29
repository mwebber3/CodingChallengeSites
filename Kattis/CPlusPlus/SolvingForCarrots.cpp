#include <iostream>

int main() {
    int problems;
    int constestantsAndProblems[2];
    std::string description;

    for (int i = 0; i < 2; i++) {
        std::cin >> constestantsAndProblems[i];
    }

    problems = constestantsAndProblems[1];

    for (int j = 0; j < constestantsAndProblems[0]; j++) {
        std::cin >> description;
    }

    std::cout << problems << std::endl;

    return 0;
}