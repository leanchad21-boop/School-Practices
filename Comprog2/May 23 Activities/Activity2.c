#include <stdio.h>

int main() {

    int numbers[5];
    int *ptr;
    int sum = 0;

    // Input 5 numbers into an array
    printf("Enter 5 numbers:\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Pointer
    ptr = numbers;

    // Display array elements using pointer
    printf("\n          Array Elements:          \n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
        sum += *(ptr + i);
    } 

    // Output      sum
    printf("\n\nSum = %d\n", sum);

    return 0;
}