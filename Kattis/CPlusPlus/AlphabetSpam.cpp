#include <iostream>

int main() {
    std::string sentence;
    double whitespaceRatio, lowerRatio, upperRatio, symbolsRatio;
    double whitespace = 0, lowercase = 0, uppercase = 0, symbols = 0;
    
    std::cin >> sentence; 

    for (int i = 0; i < sentence.length(); i++) {
        char character = sentence.at(i);

        if (character == '_') {
            whitespace++;
        } else if (character >= 97 && character <= 122) {
            lowercase++;
        } else if (character >= 65 && character <= 90) {
            uppercase++;
        } else {
            symbols++;
        }
    }

    whitespaceRatio = (whitespace / sentence.length());
    lowerRatio = (lowercase / sentence.length());
    upperRatio = (uppercase / sentence.length());
    symbolsRatio = (symbols / sentence.length());

    std::cout << whitespaceRatio << "\n" << lowerRatio << "\n" 
              << upperRatio << "\n" << symbolsRatio << "\n";
    
    exit(EXIT_SUCCESS);
    std::cin.get();
}