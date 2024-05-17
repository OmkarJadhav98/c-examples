/***********************************************
Write a program to compare two hash set.
***********************************************/

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

    for (int i = 0; i < size1; ++i) {
        int found = 0;
        for (int j = 0; j < size2; ++j) {
            if (strcmp(h_set1[i], h_set2[j]) == 0) {
                found = 1;
                break;
            }
        }
        printf("%s\n", found ? "Yes" : "No");
    }

    return 0;
}
