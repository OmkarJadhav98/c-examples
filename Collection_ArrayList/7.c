/*==================================================================
Write a program to search for an element in an array list.
==================================================================*/

#include <stdio.h>
#include <string.h> // Include the string library for strcmp function

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int size = sizeof(Colors) / sizeof(Colors[0]); // Calculate the number of elements
    int found = 0; // Variable to track if the element is found

    printf("Array of Colors is: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    // Search for an element in the array
    for (int i = 0; i < size; ++i) {
        if (strcmp(Colors[i], "Black") == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Found the element...\n");
    } else {
        printf("There is no such element...\n");
    }

    return 0;
}
