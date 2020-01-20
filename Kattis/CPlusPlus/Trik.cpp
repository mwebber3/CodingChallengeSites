#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string sequence;
    int ballPosition = 0;

    std::cin >> sequence;
    std::transform(sequence.begin(), sequence.end(), sequence.begin(), toupper);

    for (int i = 0; i < sequence.length(); i++) {
        if (sequence.at(i) == 'A' && ballPosition != 2) {
            ballPosition = (1 - ballPosition);
        } 
        if (sequence.at(i) == 'B' && ballPosition != 0) {
            ballPosition = (-ballPosition + 3);
        }
        if (sequence.at(i) == 'C' && ballPosition != 1) {
            ballPosition = (-ballPosition + 2);
        }
    }

    std::cout << (ballPosition + 1) << std::endl;

    system("PAUSE");
    return 0;
}