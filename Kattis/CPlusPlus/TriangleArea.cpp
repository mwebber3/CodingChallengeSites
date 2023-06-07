#include <iostream> 

int main() {
    double base, height, area;
    std::cin >> height >> base;

    area = ((0.5 * base) * height);
    std::cout << area << std::endl; 

    exit(EXIT_SUCCESS);
    std::cin.get();
}
