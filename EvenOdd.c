#include <stdio.h>

int main() 
{
    int No = 0;

    printf("Please enter a Number : \n");
    scanf("%d", &No);

    if(No % 2 == 0) 
    {
        printf("This number is Even Number...\n");
    } 
    else 
    {
        printf("This number is Odd Number...\n");
    }

    return 0;
}
