/*========================================================================================================
  Write a program to read gender(M/F) and print the corresponding gender using a switch statement..
========================================================================================================*/
#include <stdio.h>

int main()
{
    char gender = 0;
    printf("Enter gender(M/F): ");
    scanf("%s",&gender);

    switch (gender)
    {
        case 'M':
        case 'm':
            printf("Male");
            break;
        case 'F':
        case 'f':
            printf("Female");
            break;
        default:
            printf("Invalid input. Please enter 'M' for 'Male' and 'F' for 'Female' ");
    }
}

