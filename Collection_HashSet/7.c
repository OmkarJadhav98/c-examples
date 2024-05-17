/*********************************************************
Write a program to convert a hash set to an array.
*********************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char* h_set[MAX_SIZE];
    int size = 0;

    // Add elements to the set
    h_set[size++] = "Red";
    h_set[size++] = "Green";
    h_set[size++] = "Orange";
    h_set[size++] = "Yellow";

    printf("Original HashSet: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", h_set[i]);
    }
    printf("\n");

    // Convert HashSet to an array
    char* arr[MAX_SIZE];
    for (int i = 0; i < size; ++i) {
        arr[i] = h_set[i];
    }

    printf("Array elements: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", arr[i]);
    }
    printf("\n");

    return 0;
}
