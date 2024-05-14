/*================================================================
Write a program to copy one array list into another.
================================================================*/

#include <stdio.h>
#include <string.h> // For strcpy

int main() {
    char ColorsList1[5][10] = {"1", "2", "3", "4", "5"};
    char ColorsList2[5][10] = {"Red", "Green", "Yellow", "Blue", "Black"};

    printf("ColorsList1: ");
    for (int i = 0; i < 5; ++i) {
        printf("%s ", ColorsList1[i]);
    }
    printf("\n");

    printf("ColorsList2: ");
    for (int i = 0; i < 5; ++i) {
        printf("%s ", ColorsList2[i]);
    }
    printf("\n");

    // Copy ColorsList2 into ColorsList1
    for (int i = 0; i < 5; ++i) {
        strcpy(ColorsList1[i], ColorsList2[i]);
    }

    printf("\nCopy ColorsList1 to ColorsList2,\nAfter copy:\n");
    printf("ColorsList1: ");
    for (int i = 0; i < 5; ++i) {
        printf("%s ", ColorsList1[i]);
    }
    printf("\n");

    printf("ColorsList2: ");
    for (int i = 0; i < 5; ++i) {
        printf("%s ", ColorsList2[i]);
    }
    printf("\n");

    return 0;
}
