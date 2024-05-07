/*====================================================================================
Two numbers are entered through the keyboard.
Write a program to find the value of one number raised to the power of another.
(Do not use Java built-in method)
====================================================================================*/

#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exponent;
    printf("Enter the base number: ");
    scanf("%lf", &base);
    printf("Enter the exponent (a positive integer): ");
    scanf("%d", &exponent);

    if (exponent >= 0) {
        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }
        printf("%f raised to the power of %d is: %f\n", base, exponent, result);
    } else {
        printf("Exponent must be a non-negative integer.\n");
    }
    return 0;
}
