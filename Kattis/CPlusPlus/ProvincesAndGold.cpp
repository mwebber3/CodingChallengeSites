#include <iostream>

void FindVictoryCard (int);
void FindTreasureCard (int);

int main() {
    int gold, silver, copper, totalBP;
    std::string victoryCard, treasureCard;
    std::cin >> gold >> silver >> copper;

    totalBP = ((gold * 3) + (silver * 2) + (copper * 1));
    FindVictoryCard(totalBP);
    FindTreasureCard(totalBP);

    return 0;
}

void FindVictoryCard (int bp) {
    if (bp > 7) {
        std::cout << "Province or ";
    } else if (bp > 4 && bp < 8) {
        std::cout << "Duchy or ";
    } else if (bp > 1 && bp < 5) {
        std::cout << "Estate or ";
    } else {
        std::cout << "";
    }
}

void FindTreasureCard (int bp) {
    if (bp > 5) {
        std::cout << "Gold";
    } else if (bp > 2 && bp < 6) {
        std::cout << "Silver";
    } else {
        std::cout << "Copper";
    }
}