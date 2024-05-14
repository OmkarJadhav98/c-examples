/*===================================================================
 Write a program to clone an array list to another array list.
===================================================================*/

#include <stdio.h>

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int size = sizeof(Colors) / sizeof(Colors[0]);
    char* ClonedColors[size];

    printf("Original Array is: ");
    for (int i = 0; i < size; ++i) {
        ClonedColors[i] = Colors[i]; // Clone each element
        printf("%s ", Colors[i]);
    }
    printf("\n");

    printf("Cloned Array is: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", ClonedColors[i]);
    }
    printf("\n");

    return 0;
}
