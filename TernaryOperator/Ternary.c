#include <stdio.h>

int main() 
{
    int no = 0;

    // Display a message to user to enter a positive value

    printf("Please enter number: \n");
    scanf("%d", &no);

    /*If the number is divisible by 2 with no remainder, then it is even
    Otherwise, it is odd*/

    printf("%s\n", (no % 2 == 0) ? "this number is even using ternary operator.." : "this number is odd using ternary operator..");

    return 0;
}