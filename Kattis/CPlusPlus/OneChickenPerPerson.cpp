#include <iostream>

int main() {
    int chickensNeeded, chickensOwned, difference;
    
    std::cin >> chickensNeeded >> chickensOwned;
    
    difference = (chickensOwned - chickensNeeded);
    
    if (difference == 1) {
        std::cout << "Dr. Chaz will have " << difference << " piece of chicken left over!" << std::endl;
    } else if (difference > 1 || difference == 0) {
        std::cout << "Dr. Chaz will have " << difference << " pieces of chicken left over!" << std::endl;
    } else if (difference == -1) {
        std::cout << "Dr. Chaz needs " << (difference * -1) << " more piece of chicken!" << std::endl;
    } else {
        std::cout << "Dr. Chaz needs " << (difference * -1) << " more pieces of chicken!" << std::endl;
    }
}