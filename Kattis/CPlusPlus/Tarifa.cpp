#include <iostream>

int main() {
    int megabytes, months, allotted, sum, total;

    std::cin >> megabytes >> months;
    allotted = ((megabytes * months) + megabytes);

    for (int i = 0; i < months; i++) {
        std::cin >> total;
        sum += total;
    }

    std::cout << (allotted - sum) << std::endl;

    system("PAUSE");
    return 0;
}