/*==============================================================
Write a program to extract a portion of an array list.
==============================================================*/

#include <stdio.h>

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    char* subListColors[3]; // New array to hold the extracted portion

    // Copy the desired elements from the original array to the new array
    subListColors[0] = Colors[1]; // "Green"
    subListColors[1] = Colors[2]; // "Yellow"
    subListColors[2] = Colors[3]; // "Blue"

    printf("ArrayList is: ");
    for (int i = 0; i < 5; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    printf("Extracted portion of the ArrayList: ");
    for (int i = 0; i < 3; ++i) {
        printf("%s ", subListColors[i]);
    }
    printf("\n");

    return 0;
}
