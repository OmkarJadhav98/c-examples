/*==================================================
Write a program to sort a given array list.
==================================================*/

#include <stdio.h>
#include <stdlib.h> // Include the stdlib library for qsort function
#include <string.h> // Include the string library for strcmp function

int compare(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int main() {
    const char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int size = sizeof(Colors) / sizeof(Colors[0]); // Calculate the number of elements

    printf("List Before Sort: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    // Sort the array
    qsort(Colors, size, sizeof(Colors[0]), compare);

    printf("List After Sort: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    return 0;
}
