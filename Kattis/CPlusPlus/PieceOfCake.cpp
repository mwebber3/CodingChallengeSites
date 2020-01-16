#include <iostream>

int getHorizontalValue (int, int);
int getVerticalValue(int, int);

int main() {
    int horizontal, vertical, side, bigHorizontal, bigVertical, finalSize;
    const int thickness = 4;

    std::cin >> side >> horizontal >> vertical;

    bigHorizontal = getHorizontalValue(horizontal, side);
    bigVertical = getVerticalValue(vertical, side);

    finalSize = bigHorizontal * bigVertical * thickness;
    std::cout << finalSize << std::endl;

    system("PAUSE");
    return 0;
}

int getHorizontalValue (int horizontal, int side) {
    int horizontalTemp, bigHorizontal; 

    horizontalTemp = (side - horizontal);

    if (horizontalTemp >= (side / 2)) {
        bigHorizontal = horizontalTemp;
    } else {
        bigHorizontal = (side - horizontalTemp);
    }
    
    return bigHorizontal;
}

int getVerticalValue (int vertical, int side) {
    int verticalTemp, bigVertical; 

    verticalTemp = (side - vertical);

    if (verticalTemp >= (side / 2)) {
        bigVertical = verticalTemp;
    } else {
        bigVertical = (side - verticalTemp);
    }

    return bigVertical;
}