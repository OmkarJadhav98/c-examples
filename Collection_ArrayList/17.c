/*==============================================
Write a program to empty an array list.
==============================================*/

#include <stdio.h>

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int size = sizeof(Colors) / sizeof(Colors[0]);

    printf("List Before Remove All Elements: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    // "Empty" the array by setting its size to zero
    size = 0;

    printf("List After Remove All Elements: ");
    for (int i = 0; i < size; ++i) { // This loop will not execute since size is zero
        printf("%s ", Colors[i]);
    }
    printf("\n");

    return 0;
}
