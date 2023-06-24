#include <iostream>

int main() {
    int lwidth, lheight, swidth, sheight, result;
    std::cin >> lwidth >> lheight >> swidth >> sheight;

    // sticker must have at least 1cm on each side
    result = ((swidth < (lwidth - 1) && sheight < (lheight - 1)) ? 1 : 0;
    std::cout << result << std::endl;

    exit(EXIT_SUCCESS);
    std::cin.get();
}