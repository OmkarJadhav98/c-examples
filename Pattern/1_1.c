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

    for (int i = 1; i <= rows; i++) 
    {
       
        for (int j = rows - i; j > 0; j--) 
        {
            printf("    ");
        }

        for (int k = 1; k <= i; k++) 
        {
            printf("*   ");
        }

        printf("\n");
    }

    return 0;
}
