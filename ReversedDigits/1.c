/*====================================================================
Write a program that prompts the user to input an integer and
then outputs the number with the digits reversed.
For example, if the input is 12345, the output should be 54321.
====================================================================*/

#include <stdio.h>

int main() {
    int number, reversedNumber = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);
    return 0;
}
