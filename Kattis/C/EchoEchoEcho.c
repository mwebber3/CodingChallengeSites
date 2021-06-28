#include <stdio.h>

int main(void) {
    const int max = 15;    // maximum length is 15 characters
    char word[max];
    scanf("%s", word);

    printf("%s %s %s", word, word, word);
    return 0;
}
