/**********************************************************************************
Write a program to compare two sets and retain elements that are the same.
**********************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char* h_set1[MAX_SIZE];
    int size1 = 0;

    // Add elements to the first set
    h_set1[size1++] = "Red";
    h_set1[size1++] = "Green";
    h_set1[size1++] = "Orange";
    h_set1[size1++] = "Yellow";

    char* h_set2[MAX_SIZE];
    int size2 = 0;

    // Add elements to the second set
    h_set2[size2++] = "Red";
    h_set2[size2++] = "Pink";
    h_set2[size2++] = "Black";
    h_set2[size2++] = "Yellow";

    // Retain elements that are the same
    for (int i = 0; i < size1; ++i) {
        int found = 0;
        for (int j = 0; j < size2; ++j) {
            if (strcmp(h_set1[i], h_set2[j]) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            h_set1[i] = NULL;
        }
    }

    printf("Set after retaining common elements: ");
    for (int i = 0; i < size1; ++i) {
        if (h_set1[i] != NULL) {
            printf("%s ", h_set1[i]);
        }
    }
    printf("\n");

    return 0;
}
