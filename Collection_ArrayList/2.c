/*=======================================================================================
Write a program to insert an element into the array list at the first position.
=======================================================================================*/

#include <stdio.h>

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue"};
    int size = sizeof(Colors) / sizeof(Colors[0]); // Calculate the number of elements

    // Iterate through the array and print each element
    for (int i = 0; i < size; ++i) {
        printf("%s\n", Colors[i]);
    }

    return 0;
}
