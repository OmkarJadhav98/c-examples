#include <stdio.h>

int main() 
{
    int a = 0; 
    int b = 0;

    printf("Please enter First number:\n");
    scanf("%d", &a);

    printf("Please enter Second number:\n");
    scanf("%d", &b);

    if(a == b) 
    {
        printf("Value of 'a' is exact equals to 'b'.\n");
    } else 
    {
        printf("Value of 'a' is not exact equals to 'b'.\n");
    }

    return 0;
}
