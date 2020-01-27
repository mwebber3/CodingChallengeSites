#include <iostream>
#include <vector>

int main() {
    int n, temp, counter = 0;
    std::vector<int> list;
    
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        if (temp < 0) {
            counter++;
        }
    }
    std::cout << counter << std::endl;

    return 0;
}