/*============================================================
Write a program to reverse elements in an array list.
============================================================*/

#include <stdio.h>

void reverse(char* array[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        char* temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int size = sizeof(Colors) / sizeof(Colors[0]);

    printf("List Before Reverse: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    // Reverse the array
    reverse(Colors, size);

    printf("List After Reverse: ");
    for (int i = 0; i < size; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n");

    return 0;
}
