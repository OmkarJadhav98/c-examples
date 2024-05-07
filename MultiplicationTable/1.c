/*=======================================================================
Write a program that prompts the user to input a positive integer.
It should then print the multiplication table of that number.
=======================================================================*/

#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, (num * i));
    }
    return 0;
}
