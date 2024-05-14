/*===================================================================================================
Write a program to create an array list, add some colors (strings) and print out the collection.
=====================================================================================================*/

#include <stdio.h>
#include <stdlib.h> // Include the standard library for dynamic memory allocation

int main() {
    char* Colors[4]; // Declare an array of strings (equivalent to ArrayList)

    // Allocate memory for each color and assign values
    Colors[0] = "Red";
    Colors[1] = "Green";
    Colors[2] = "Yellow";
    Colors[3] = "Blue";

    // Print the array elements
    printf("Array of Colors is: ");
    for (int i = 0; i < 4; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    return 0;
}
