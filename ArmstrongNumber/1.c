#include <stdio.h>

int Armstrong(int No) 
{
    int originalNumber = No;
    int remainder = 0;
    int result = 0;
    int iNo = 0;

    // Count the number of digits in No
    while (originalNumber != 0) 
    {
        originalNumber /= 10;
        ++iNo;
    }

    originalNumber = No;

    // Calculate the sum of the nth powers of its digits
    while (originalNumber != 0) 
    {
        remainder = originalNumber % 10;
        int power = 1;
        int i = 0;
        while (i < iNo) 
        {
            power *= remainder;
            ++i;
        }

        result += power;
        originalNumber /= 10;
    }

    // Check if No is an Armstrong number
    return No == result;
}

int main() 
{
    printf("Please enter a number to check if it's an Armstrong number: \n");

    int No;
    scanf("%d", &No);

    if (Armstrong(No)) 
    {
        printf("%d is an Armstrong number", No);
    } else 
    {
        printf("%d is not an Armstrong number", No);
    }

    return 0;
}
