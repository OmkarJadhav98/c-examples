/*====================================================================
Write a program to test whether an array list is empty or not.
====================================================================*/

#include <stdio.h>

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int size = sizeof(Colors) / sizeof(Colors[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");
    printf("Checking the above array is empty or not! %s\n", (size == 0 ? "Yes" : "No"));

    // "Empty" the array by setting its size to zero
    size = 0;
    printf("\nArray after remove all elements: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");
    printf("Checking the above array is empty or not! %s\n", (size == 0 ? "Yes" : "No"));

    return 0;
}
