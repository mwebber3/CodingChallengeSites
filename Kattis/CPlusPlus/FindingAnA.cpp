#include <iostream>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);
    bool flag = false;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence.at(i) == 'a') {
            flag = true;
        }
        if (flag) {
            std::cout << sentence.at(i) << std::endl;
        }
    }
    exit(EXIT_SUCCESS);
    std::cin.get();
}
