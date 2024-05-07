/*===============================================================
Write a program to calculate HCF of Two given number.
===============================================================*/

#include <stdio.h>

int main() {
    int num1, num2, hcf;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    hcf = 1; // Start with the lowest possible HCF
    int min = (num1 < num2) ? num1 : num2; // Find the smaller number

    for (int i = min; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i; // Found the HCF
            break; // No need to check further
        }
    }

    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}
