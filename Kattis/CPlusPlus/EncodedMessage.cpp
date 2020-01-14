#include <iostream>
#include <cmath> 

void DecodeMessage (int, std::string);

int main() {
    int cases, length;
    std::string encodedMessage;

    std::cout << "How many messages would you like to decrypt? ";
    std::cin >> cases;

    for (int i = 0; i < cases; i++) {
        std::cout << "Enter the message: ";
        std::cin >> encodedMessage;
        length = sqrt(encodedMessage.length());
        DecodeMessage(length, encodedMessage);
    }

    system("PAUSE");
    return 0;
}

void DecodeMessage (int length, std::string encodedMessage) {
    std::cout << "Decrypted Message: ";
    for (int j = 0; j < length; j++) {
        for (int k = (length - 1); k < (encodedMessage.length()); k+= length) {
            std::cout << encodedMessage.at(k - j);
        }
    }
    std::cout << std::endl;
}