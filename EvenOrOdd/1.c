/*==============================================================================================
Write a program to Check whether the number is even or odd using switch statement..
================================================================================================
 */
#include <stdio.h>

int main()
{
    int number = 0;

    printf("Enter a number: ");

    scanf("%d",&number);

    switch (number % 2)
    {
        case 0:
            printf("%d is a Even number",number);
            break;
        case 1:
            printf("%d is a odd number",number);
            break;
        default:
            printf("Unexpected error founded....",number);
    }
}

