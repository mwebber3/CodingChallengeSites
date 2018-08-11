#include <stdio.h>

int main()
{
    char first[1001], second[1001];
    scanf("%s", first);
    scanf("%s", second);
    printf(strlen(first) < strlen(second) ? "no\n" : "go\n");
}