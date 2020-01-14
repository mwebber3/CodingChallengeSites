#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    int numOfBooks, temp, totalForAll = 0, discountBooks = 0, totalWithPromo = 0;
    std::vector<int> bookCost;

    std::cin >> numOfBooks; 

    for (int i = 0; i < numOfBooks; i++) {
        std::cin >> temp;
        totalForAll += temp;
        bookCost.push_back(temp);
    }

    sort(bookCost.begin(), bookCost.end());

    for (int j = (bookCost.size() - 3); j >= 0; j -= 3) {
        discountBooks += bookCost.at(j);
    }

    totalWithPromo = (totalForAll - discountBooks);
    std::cout << totalWithPromo << std::endl;

    system("PAUSE");
    return 0;
}