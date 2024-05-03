/*==========================================================
Write a program to print numbers from 1 to 10.
==========================================================*/

#include <stdio.h>

int main()
{
    int upperLimit;
    
    printf("Enter a number: \n");
    scanf("%d",&upperLimit);

    for (int i = 1; i <= upperLimit; i++)
    {
        printf("\n%d", i) ;
    }

    return 0;
}