/*==================================================================================================
Write a program that reads a set of integers, and then prints the sum of the even and odd integers.
==================================================================================================*/

#include <stdio.h>

int main() {
    int count, num, evenSum = 0, oddSum = 0;
    printf("Enter the number of integers: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenSum += num;
        } else {
            oddSum += num;
        }
    }

    printf("Sum of even integers: %d\n", evenSum);
    printf("Sum of odd integers: %d\n", oddSum);
    return 0;
}
