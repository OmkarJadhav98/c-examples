#include <stdio.h>

int main() 
{
    int No = 0;

    printf("Please enter a Number : ");
    scanf("%d", &No);

    if((No % 2 == 0) && (No > 100)) 
    {
        printf("This number is Golden number...\n");
    } 
    else if((No % 2 == 0) && (No <= 100)) 
    {
        printf("This number is Silver number...\n");
    } 
    else if((No % 2 != 0) && (No > 100)) 
    {
        printf("This number is Platinum number...\n");
    } 
    else if((No % 2 != 0) && (No <= 100)) 
    {
        printf("This number is Titanium number...\n");
    }
    
    return 0;
}
