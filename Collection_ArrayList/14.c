/*-------------------------------------------------------------------
Write a program that swaps two elements in an array list.
-------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    char* temp; // Temporary variable for swapping

    printf("ArrayList Before Swap: ");
    for (int i = 0; i < 5; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    // Swapping 1st(index 0) element with the 3rd(index 2) element
    temp = Colors[0];
    Colors[0] = Colors[2];
    Colors[2] = temp;

    printf("ArrayList after swap: ");
    for (int i = 0; i < 5; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    return 0;
}
