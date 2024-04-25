/*====================================================

                                  *
                                *   *
                              *   *   *
                            *   *   *   *
                          *   *   *   *   *
                        *   *   *   *   *   *
                      *   *   *   *   *   *   *
                     *  *   *   *   *   *   *   *
                      *   *   *   *   *   *   *
                        *   *   *   *   *   *
                          *   *   *   *   *
                            *   *   *   *
                              *   *   *
                                *   *
                                  *

====================================================*/

#include <stdio.h>

int main()
{
    int rows = 8;

    int i = 1;
    int j = 0;

    while(i <= rows)
    {
        j = rows - i;
        while(j > 0)
        {
            printf("  ");
            j--;
        }
        int k = 1;
        while (k <= i)
        {
            printf("*   ");
            k++;
        }

        printf("\n");
        i++;
    }

    i = rows - 1;
    while(i > 0)
    {
        j = rows - i;
        while (j > 0)
        {
            printf("  ");
            j--;
        }
        int k = 1;
        while (k <= i) 
        {
            printf("*   ");
            k++;
        }

        printf("\n");
        i--;
    }
     
}