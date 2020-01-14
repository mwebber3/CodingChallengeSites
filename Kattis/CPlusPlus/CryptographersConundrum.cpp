#include <iostream>
#include <algorithm>

int main() {
    std::string cipherText;
    int days = 0, counter = 1; 

    std::cin >> cipherText;
    transform(cipherText.begin(), cipherText.end(), cipherText.begin(), toupper);

    for (int i = 0; i < cipherText.length(); i++) {
        if (counter == 1 && cipherText.at(i) != 'P') {
            days++;
        }
        if (counter == 2 && cipherText.at(i) != 'E') {
            days++;
        }
        if (counter == 3 && cipherText.at(i) != 'R') {
            days++;
        }

        counter++;

        if (counter == 4) {
            counter = 1;
        }
    }

    std::cout << days << std::endl;

    system("PAUSE");
    return 0;
}