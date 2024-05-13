/*========================================================================================================
Write a program to print Fibonacci series of n terms where n is input by user : 0 1 1 2 3 5 8 13 24 .....
==========================================================================================================*/

#include <stdio.h>

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d", firstTerm, secondTerm);

    for (int i = 3; i <= n; i++) {
        nextTerm = firstTerm + secondTerm;
        printf(" %d", nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0;
}
