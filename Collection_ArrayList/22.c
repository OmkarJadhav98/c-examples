/***********************************************************************************************
Write a program to print all the elements of an ArrayList using the elements' position.
***********************************************************************************************/

#include <stdio.h>

int main() {
    char* Colors[] = {"Red", "Green", "Yellow", "Blue", "Black"};
    int NoOfElements = sizeof(Colors) / sizeof(Colors[0]);

    printf("Original Array: ");
    for (int i = 0; i < NoOfElements; ++i) {
        printf("%s ", Colors[i]);
    }
    printf("\n\nPrint using index of an element: \n");

    for (int index = 0; index < NoOfElements; ++index) {
        printf("%s\n", Colors[index]);
    }

    return 0;
}
