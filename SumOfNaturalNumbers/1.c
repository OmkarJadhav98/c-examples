/*========================================================================
Write a program to calculate the sum of first 10 natural number.
=========================================================================*/

#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++) 
    {
        sum += i; // Add each number to sum
    }

    printf("The sum of the first 10 natural numbers is: ", sum);

}
