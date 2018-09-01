#include <iostream>

int main() {
	int total = 0;
	int prices[4], arrival[3], departure[3];

	prices[0] = 0; // zero cars = freeeeee
	std::cin >> prices[1] >> prices[2] >> prices[3];
	std::cin >> arrival[0] >> departure[0];
	std::cin >> arrival[1] >> departure[1];
	std::cin >> arrival[2] >> departure[2];

	for (int i = 0; i < 100; i++) {
		int numOfCars = 0;

		for (int j = 0; j < 3; j++) {
			if (i >= arrival[j] && i < departure[j])
				numOfCars += 1;
		}
		total += (numOfCars * prices[numOfCars]);
	}
	std::cout << total << std::endl;
	return 0;
}