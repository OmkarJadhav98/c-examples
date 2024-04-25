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

    for(;i <= rows; i++)
    {
        j = rows - i;
        for(;j > 0; j--)
        {
            printf("  ");
        }

        int k = 1;
        for(;k <= i; k++)
        {
            printf("*   ");
        }

        printf("\n");
    }

    i = rows - 1;
    for(; i > 0; i--)
    {
        j = rows - i;
        for (; j > 0 ;j--)
        {
            printf("  ");
        }

        int k = 1;
        for (; k <= i; k++) 
        {
            printf("*   ");
        }

        printf("\n");
    }
     
}