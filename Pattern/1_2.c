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

    do 
    {
        int j = rows - i;

        do 
        {
            printf("    ");
            j--;
        }while (j >= 0);

        int k = 1;
        do 
        {
            printf("*   ");
            k++;
        }while (k <= i);

        printf("\n");
        i++;
    }while (i <= rows);

    return 0;
}
