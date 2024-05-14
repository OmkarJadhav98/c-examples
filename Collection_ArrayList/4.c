/*============================================================================================
Write a program to retrieve an element (at a specified index) from a given array list.
============================================================================================*/

#include <stdio.h>

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int size = sizeof(Colors) / sizeof(Colors[0]); // Calculate the number of elements

    printf("Array of Colors is: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    // Retrieve the first, second, and fifth element
    printf("First Element: %s\n", Colors[0]);
    printf("Second Element: %s\n", Colors[1]);
    printf("Fifth Element: %s\n", Colors[4]);

    return 0;
}
