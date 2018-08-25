#include <iostream>
#include <algorithm>

int main() {
	int numbers[4];
	
	for (int i = 0; i < 4; i++) {
		std::cin >> numbers[i];
	}

	std::sort(numbers, numbers+4);
	std::cout << numbers[0] * numbers[2] << std::endl;
	return 0;
}