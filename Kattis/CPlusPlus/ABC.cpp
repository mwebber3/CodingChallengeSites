#include <iostream> 

int main() {
    int temp, numbers[3];
    std::string letters;

    for (int i = 0; i < 3; i++) {
        std::cin >> numbers[i];
    }

    std::cin >> letters;

    for (int j = 0; j <= 3; j++) {
        for (int k = 0; k <= (j - 1); k++) {
            if (numbers[k] > numbers[k + 1]) {
                temp = numbers[k];
                numbers[k] = numbers[k + 1];
                numbers[k + 1] = temp;
            }
        }
    }

    int num0 = numbers[0], num1 = numbers[1], num2 = numbers[2];
    char char0 = letters[0], char1 = letters[1], char2 = letters[2];

    if (char0 == 'A' && char1 == 'B' && char2 == 'C') {
        std::cout << num0 << " " << num1 << " " << num2 << std::endl;
    } else if (char0 == 'A' && char1 == 'C' && char2 == 'B') {
        std::cout << num0 << " " << num2 << " " << num1 << std::endl;
    } else if (char0 == 'B' && char1 == 'A' && char2 == 'C') {
        std::cout << num1 << " " << num0 << " " << num2 << std::endl;
    } else if (char0 == 'B' && char1 == 'C' && char2 == 'A') {
        std::cout << num1 << " " << num2 << " " << num0 << std::endl;
    } else if (char0 == 'C' && char1 == 'A' && char2 == 'B') {
        std::cout << num2 << " " << num0 << " " << num1 << std::endl;
    } else if (char0 == 'C' && char1 == 'B' && char2 == 'A') {
        std::cout << num2 << " " << num1 << " " << num0 << std::endl;
    }

    system("PAUSE");
    return 0;
}
