#include <stdio.h>

int main()
{
    int i, firstRoll, secondRoll, lowestRoll, highestRoll;
    scanf("%i", &firstRoll);
    scanf("%i", &secondRoll);
    lowestRoll = firstRoll;
    highestRoll = secondRoll;

    if (secondRoll < firstRoll) {
      lowestRoll = secondRoll;
      highestRoll = firstRoll;
    }

    for (i = (lowestRoll + 1); i <= (highestRoll + 1); i++) {
		printf(" %d \n", i);
    }
    return 0;
}
