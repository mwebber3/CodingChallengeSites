#include <iostream>

int main() {
	int n, points;
	std::cin >> n;

	points = (int)pow((pow(2, n) + 1), 2);
	std::cout << points;
	
	return 0;
}