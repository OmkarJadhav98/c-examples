/*==================================================
Write a program to join two array lists.
==================================================*/

#include <stdio.h>

int main() {
    char* ColorsList1[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    char* ColorsList2[] = {"White", "Orange", "Violet", "Purple"};
    int size1 = sizeof(ColorsList1) / sizeof(ColorsList1[0]);
    int size2 = sizeof(ColorsList2) / sizeof(ColorsList2[0]);
    char* NewArray[size1 + size2];

    // Copy ColorsList1 into NewArray
    for (int i = 0; i < size1; ++i) {
        NewArray[i] = ColorsList1[i];
    }

    // Append ColorsList2 to NewArray
    for (int i = 0; i < size2; ++i) {
        NewArray[size1 + i] = ColorsList2[i];
    }

    printf("New array: ");
    for (int i = 0; i < size1 + size2; ++i) {
        printf("%s ", NewArray[i]);
    }
    printf("\n");

    return 0;
}
