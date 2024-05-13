/*====================================================================================
Write a program to calculate the sum of following series where n is input by user: 
1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/n 
====================================================================================*/

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("The sum of the series is: %f\n", sum);
    return 0;
}
