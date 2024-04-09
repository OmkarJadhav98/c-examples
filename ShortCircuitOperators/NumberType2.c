#include <stdio.h>

int main() 
{
    int No = 0;

    printf("Please enter a Number : \n");
    scanf("%d", &No);

    if((No > 100) || (No % 2 == 0)) 
    {
        printf("----Great no----\n");
    } 
    else if((No < 100) || (No % 2 != 0)) 
    {
        printf("----Super no----\n");
    }
    
    return 0;
}
