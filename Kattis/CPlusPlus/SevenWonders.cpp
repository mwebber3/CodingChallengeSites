#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

bool InvalidEntryCheck(std::string);

int main() {
    std::string cards;
    int counterT = 0, counterC = 0, counterG = 0, total = 0, superSet = 0;

    std::cin >> cards;
    std::transform(cards.begin(), cards.end(), cards.begin(), toupper);

    if (InvalidEntryCheck(cards) == false) {
        std::cout << "Invalid input." << std::endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < cards.length(); i++) {
        // switch instead of if statements for efficiency 
        switch (cards.at(i)) {
            case 'T':
                counterT++;
                break;
            case 'C':
                counterC++;
                break;
            default:
                counterG++;
                break;
        }
    }

    if ((counterT <= counterC) && (counterT <= counterG)) {
        superSet = counterT;
    } else if ((counterC <= counterT) && (counterC <= counterG)) {
        superSet = counterC;
    } else {
        superSet = counterG;
    }

    total = (pow(counterT, 2) + pow(counterC, 2) + pow(counterG, 2) + (superSet * 7));
    std::cout << total << std::endl;

    system("PAUSE");
    return 0;
}

bool InvalidEntryCheck (std::string cards) {
    bool input = true;

    for (int i = 0; i < cards.length(); i++) {
        if (cards.at(i) != 'T' && cards.at(i) != 'C' && cards.at(i) != 'G') {
            input = false;
        }
    }

    return input; 
}