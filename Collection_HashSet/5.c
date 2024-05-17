/************************************************************
Write a program to test if a hash set is empty or not.
************************************************************/

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

    printf("HashSet is: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", h_set[i]);
    }
    printf("\n");

    // Check if the set is empty
    if (size == 0) {
        printf("The set is empty.\n");
    } else {
        printf("The set is not empty.\n");
    }

    // Remove all elements from the set
    size = 0;
    printf("HashSet after removing all elements: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", h_set[i]);
    }
    printf("\n");

    return 0;
}
