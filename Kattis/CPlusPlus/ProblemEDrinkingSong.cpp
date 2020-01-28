#include <iostream>

int main() {
    int num;
    std::string name;

    std::cin >> num >> name;

    for (int i = num; i > 0; i--) {
        if (i == 1) {
            std::cout << i << " bottle of " << name << " on the wall, " << i << " bottle of " << name 
                      << ".\nTake it down, pass it around, no more bottles of " << name << "."; 
        } 
        if (i == 2) {
            std::cout << i << " bottles of " << name << " on the wall, " << i << " bottles of " << name 
                      << ".\nTake one down, pass it around, 1 bottle of " << name 
                      << " on the wall.\n" << std::endl;
        } 
        if (i > 2) {
            std::cout << i << " bottles of " << name << " on the wall, " << i << " bottles of " << name
                      << ".\nTake one down, pass it around, " << (i - 1) << " bottles of " << name 
                      << " on the wall.\n" << std::endl;
        }
    }

    return 0;
}
