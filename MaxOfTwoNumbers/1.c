/*==========================================================================
Write a program to find the Maximum of Two Numbers using switch statement.
==========================================================================*/

#include <stdio.h>

int main()
{
    double num1;
    double num2;
    double max;
    int compareResult;

    printf("Enter the first number: ");
    scanf("%lf",&num1);

    printf("Enter the second number: ");
    scanf("%lf",&num2);

    // Compare num1 and num2 and store the result in compareResult
    compareResult = (num1 > num2) - (num1 < num2);

    switch (compareResult) 
    {
        case 1:  // num1 is greater than num2
            max = num1;
            break;
        case -1: // num1 is less than num2
            max = num2;
            break;
        default: // num1 is equal to num2
            max = num1; // or num2, since they are equal
            break;
    }

    printf("The maximum of %lf and %lf is : %lf\n",num1,num2,max);

    return 0;
}
