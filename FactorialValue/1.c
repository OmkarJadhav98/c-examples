/*=========================================================================================
Write a program to find the factorial value of any number entered through the keyboard.
=========================================================================================*/

#include <stdio.h>

int main() {
    int number;
    printf("Enter a positive integer to calculate its factorial: ");
    scanf("%d", &number);

    // Note: This will only work for small factorials that fit in an unsigned long long
    unsigned long long factorial = 1;

    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d is: %llu\n", number, factorial);
    return 0;
}
