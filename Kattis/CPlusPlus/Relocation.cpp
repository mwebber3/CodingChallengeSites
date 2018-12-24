#include <iostream>
#include <vector>

int main() {
	int numOfCompanies, numOfRequests, action, company, location;

	std::cin >> numOfCompanies >> numOfRequests;
	std::vector<int> initialLocations(numOfCompanies);
	
	for (int i = 0; i < numOfCompanies; i++) {
		std::cin >> initialLocations[i];
	}
	for (int i = 0; i < numOfRequests; i++) {
		std::cin >> action >> company >> location;
		
		if (action == 1) {
			initialLocations[company - 1] = location;
		}
		else {
			std::cout << (abs(initialLocations[company - 1] - initialLocations[location - 1]));
		}
	}

	system("PAUSE");
	return 0;
}