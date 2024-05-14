/*=======================================================================================
Write a program to insert an element into the array list at the first position.
=======================================================================================*/

#include <stdio.h>

int main() {
    char* Colors[5]; // Increase the size of the array to accommodate the new element
    Colors[0] = "Orange"; // Insert "Orange" at the first position
    Colors[1] = "Red";
    Colors[2] = "Green";
    Colors[3] = "Yellow";
    Colors[4] = "Blue";

    printf("New Array is: ");
    for (int i = 0; i < 5; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    return 0;
}
