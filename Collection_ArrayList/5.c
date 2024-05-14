/*========================================================================
Write a program to update an array element by the given element.
========================================================================*/

#include <stdio.h>

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int size = sizeof(Colors) / sizeof(Colors[0]); // Calculate the number of elements

    printf("Original Array of Colors is: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    // Update the third element with "Orange"
    Colors[2] = "Orange";

    printf("Updated Array of Colors is: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    return 0;
}
