/*====================================================
                  *
                *   *
              *   *   *
            *   *   *   *
          *   *   *   *   *
        *   *   *   *   *   *
====================================================*/

#include <stdio.h>

int main() 
{
    int rows = 6;
    int i = 1;

    while (i <= rows) 
    {
        int j = rows - i;

        // Print spaces
        while (j > 0) 
        {
            printf("  ");
            j--;
        }

        // Print stars
        int k = 1;
        while (k <= i) 
        {
            printf("*   ");
            k++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
