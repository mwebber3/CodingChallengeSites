#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

void findDifferences(std::string line1, std::string line2) {
    std::vector<std::string> finalDifferences;
    int longestString = std::max(line1.length(), line2.length());

    for (int i = 0; i < longestString; i++) {
        if (line1[i] == line2[i]) 
            finalDifferences.push_back("."); // add . to the line if the characters are the same
        else
            finalDifferences.push_back("*"); // add * to the line if the characters are different
    }

    std::cout << line1 << std::endl << line2 << std::endl;
    copy(finalDifferences.begin(), finalDifferences.end(), std::ostream_iterator<std::string>(std::cout));
    std::cout << std::endl << std::endl;
}

int main() {
    int testCases;
    std::string firstLine, secondLine;
    std::cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        std::cin >> firstLine;
        std::cin >> secondLine;
        findDifferences(firstLine, secondLine);
    }
    
    return 0;
}