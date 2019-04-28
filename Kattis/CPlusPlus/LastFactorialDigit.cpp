#include <iostream>

int calculateFactorial(int number); 

int main() {
	int i, j, cases, number, result, lastDigit;

	std::cin >> cases; 

	for (i = 0; i < cases; i++) {
	std::cin >> number;

	result = calculateFactorial(number);
	lastDigit = result % 10;
	std::cout << lastDigit; 
	}

	return 0;
}

int calculateFactorial(int number) {
	if (number == 1) {
		return 1;
	}
	else {
		return number * calculateFactorial(number - 1);
	}
}