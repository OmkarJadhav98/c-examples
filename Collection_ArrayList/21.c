/***********************************************************************************************
Write a program to replace the second element of an ArrayList with the specified element.
***********************************************************************************************/

#include <stdio.h>

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int size = sizeof(Colors) / sizeof(Colors[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    // Replace the second element with "White"
    Colors[1] = "White";

    printf("Array after replacing the second element with 'White': ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    return 0;
}
