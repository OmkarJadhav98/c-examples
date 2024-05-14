/*============================================================
Write a program to shuffle elements in an array list.
============================================================*/

#include <stdio.h>
#include <stdlib.h> // For rand and srand
#include <time.h> // For time

void shuffle(char* array[], int n) {
    srand(time(NULL)); // Seed the random number generator
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char* temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int size = sizeof(Colors) / sizeof(Colors[0]);

    printf("List Before Shuffling: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    // Shuffle the array
    shuffle(Colors, size);

    printf("List After Shuffling: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    return 0;
}
