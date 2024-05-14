/*============================================================================
Write a program to compare two array lists.
============================================================================*/

#include <stdio.h>
#include <string.h> // For strcmp

int main() {
    char* ColorsList1[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    char* ColorsList2[] = {"Red", "Green", "Yellow", "Black"};
    int size1 = sizeof(ColorsList1) / sizeof(ColorsList1[0]);
    int size2 = sizeof(ColorsList2) / sizeof(ColorsList2[0]);

    printf("ColorsList1: ");
    for (int i = 0; i < size1; ++i) {
        printf("%s ", ColorsList1[i]);
    }
    printf("\n");

    printf("ColorsList2: ");
    for (int i = 0; i < size2; ++i) {
        printf("%s ", ColorsList2[i]);
    }
    printf("\n");

    // Compare the two arrays
    printf("Comparison result: ");
    for (int i = 0; i < size1; ++i) {
        int found = 0;
        for (int j = 0; j < size2; ++j) {
            if (strcmp(ColorsList1[i], ColorsList2[j]) == 0) {
                found = 1;
                break;
            }
        }
        printf("%s ", found ? "Yes" : "No");
    }
    printf("\n");

    return 0;
}
