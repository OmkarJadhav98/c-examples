/*===============================================================================
Write a program to enter the numbers till the user wants and
at the end it should display the count of positive, negative and zeros entered.
=================================================================================*/

#include <stdio.h>

int main() 
{
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    int num;

    printf("Enter numbers (enter -1 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break; // Exit the loop if -1 is entered
        } else if (num > 0) {
            positiveCount++; // Increment positiveCount for positive input
        } else if (num < 0) {
            negativeCount++; // Increment negativeCount for negative input
        } else {
            zeroCount++; // Increment zeroCount for zero input
        }
    }

    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}
