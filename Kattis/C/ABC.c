#include <stdio.h>

int main(void) {
    int temp = 0, nums[3];
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
    
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= (i - 1); j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    char letters[5];
    scanf("%s", letters);
    int i; 
    for (int k = 0; k < 3; k++) {
        printf("%d ", nums[letters[k] - 'A']);
    }

    printf("\n");
}