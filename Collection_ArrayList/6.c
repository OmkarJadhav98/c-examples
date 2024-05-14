/*======================================================================
Write a program to remove the third element from an array list.
======================================================================*/

#include <stdio.h>

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int size = sizeof(Colors) / sizeof(Colors[0]); // Calculate the number of elements

    printf("Original Array of Colors is: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    // Remove the third element by shifting the rest of the elements
    for (int i = 2; i < size - 1; ++i) {
        Colors[i] = Colors[i + 1];
    }

    printf("After removing third element from the array:\n");
    for (int i = 0; i < size - 1; ++i) { // Adjust the loop to the new size
        printf("%s ", Colors[i]);
    }
    printf("\n");

    return 0;
}
