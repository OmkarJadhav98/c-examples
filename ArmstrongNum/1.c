/*====================================================================================
Write a program to print out all Armstrong numbers between 1 and 500. 
If sum of cubes of each digit of the number is equal to the number itself, 
then the number is called an Armstrong number.
For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
====================================================================================*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int number= 0;
    int originalNumber = 0;
    int result = 0;
    int remainder;

    for (number = 1; number <= 500; number++) 
    {
        originalNumber = number;
        result = 0;

        while (originalNumber != 0) 
        {
            remainder = originalNumber % 10;
            result += pow(remainder, 3);
            originalNumber /= 10;
        }

        if (result == number) {
            printf("%d is an Armstrong number.\n", number);
        }
    }
    return 0;
}
