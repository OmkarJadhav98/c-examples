/*************************************************************
Write a program to increase an array list size.
*************************************************************/

/************************************************************************************************************
In C, arrays have a fixed size, and you cannot increase their size once declared. 
If you need a resizable array, you would typically use dynamic memory allocation with malloc, realloc, etc.
************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Example using dynamic memory allocation
    char** Colors = malloc(2 * sizeof(char*));
    Colors[0] = "Red";
    Colors[1] = "Green";

    // Increase the size of the array
    Colors = realloc(Colors, 5 * sizeof(char*));
    Colors[2] = "Yellow";
    Colors[3] = "Blue";
    Colors[4] = "Black";

    // Print the new array
    for (int i = 0; i < 5; ++i) 
    {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    // Free the memory when done
    free(Colors);

    return 0;
}
