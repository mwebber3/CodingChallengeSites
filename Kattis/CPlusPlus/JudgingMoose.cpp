#include <iostream>

void CheckRange(int l, int r);

int main() {
    int left, right, doubled, evenOrOdd;

    std::cin >> left >> right;

    CheckRange(left, right);

    if (left == 0 && right == 0) {
        std::cout << "Not a moose" << std::endl; 
    } else if (left == right) {
        doubled = (left * 2);
        std::cout << "Even " << doubled << std::endl; 
    } else if (left > right) {
        doubled = (left * 2);
        std::cout << "Odd " << doubled << std::endl;
    } else {
        doubled = (right * 2);
        std::cout << "Odd " << doubled << std::endl; 
    }

    return 0;
}

void CheckRange(int l, int r) {
    if (l > 20 || l < 0 || r > 20 || r < 0) {
        std::cout << "Invalid Entry. Enter a number from 0 to 20." << std::endl;
    }
}