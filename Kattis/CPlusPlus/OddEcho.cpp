#include <iostream>

bool checkInput(int);

int main() {
    int i, j, numOfLines;
    std::cin >> numOfLines;
    std::string words[numOfLines];
    
    if (checkInput(numOfLines) == false) {
        std::cout << "Please re-enter value." << std::endl;
    } else {
        for (i = 0; i < numOfLines; i++) {
            std::cin >> words[i];
        }
        for (j = 0; j <= numOfLines; j = (j + 2)) {
            std::cout << words[j] << std::endl;
        }
    }

    exit(EXIT_SUCCESS);
    std::cin.get();
}

bool checkInput(int numOfLines) {
    bool result = (numOfLines < 1 || numOfLines > 10) ? false : true;
    return result;
}
