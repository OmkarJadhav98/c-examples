/*==================================================================
Write a program for trimming the capacity of an array list.
==================================================================*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Example using dynamic memory allocation
    char** Colors = malloc(5 * sizeof(char*));
    // Assume Colors is filled with strings here

    // Trim capacity - not common practice in C
    Colors = realloc(Colors, 5 * sizeof(char*));

    // Continue using Colors
    // Assume Colors is used here

    // Free the memory when done
    free(Colors);

    return 0;
}
