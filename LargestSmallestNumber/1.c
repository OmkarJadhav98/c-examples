/*================================================================================
Write a program to enter the numbers till the user wants and
at the end the program should display the largest and smallest numbers entered.
================================================================================*/

#include <stdio.h>

int main() {
    int smallest = 0;
    int largest = 0;
    int num;

    printf("Enter numbers (enter -1 to stop):\n");
    
    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break; // Exit the loop if -1 is entered
        }
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
