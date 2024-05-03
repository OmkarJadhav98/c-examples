/*============================================================================================
Write a program to check whether a person is eligible to vote or Not using switch statement.
=============================================================================================*/

#include <stdio.h>

int main()
{
    int age;
    
    printf("Enter your age : ");
    scanf("%d",&age);
    
    // Since switch does not support range checking directly, we convert the age to cases
    int eligibilityCase = (age >= 18) ? 1 : 0;

    switch (eligibilityCase) 
    {
        case 1:
            printf("You are eligible to vote.");
            break;
        case 0:
            printf("You are not eligible to vote.");
            break;
        default:
            printf("Invalid input.");
            break;
    }
    return 0;
}
