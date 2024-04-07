#include <stdio.h>

int main() 
{
    int a = 0; 
    int b = 0;

    printf("Please enter a First number:\n");
    scanf("%d", &a);

    printf("Please enter a Second number:\n");
    scanf("%d", &b);

    if(a != b) 
    {
        printf("Value of 'a' is not equals to 'b'.\n");
    } else 
    {
        printf("Value of 'a' is exact equals to 'b'.\n");
    }

    return 0;
}
