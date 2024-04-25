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

    for(;i <= rows; i++) 
    {
        int j = rows - i;

        // Print spaces
        for (;j > 0; j--) 
        {
            printf("  ");
        }

        // Print stars
        int k = 1;
        for(;k <= i; k++) 
        {
            printf("*   ");
        }

        printf("\n");
    }

    return 0;
}
