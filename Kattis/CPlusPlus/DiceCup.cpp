#include <iostream>

int main() {
	int i, firstRoll, secondRoll, lowestRoll, highestRoll;
	std::cin >> firstRoll >> secondRoll;
	lowestRoll = firstRoll;
	highestRoll = secondRoll;

	if (secondRoll < firstRoll) {
		lowestRoll = secondRoll;
		highestRoll = firstRoll;
	}

	for (i = (lowestRoll + 1); i <= (highestRoll + 1); i++) {
		std::cout << i << std::endl;
	}

	std::cin.get();
	std::cin.ignore();
	return 0;
}