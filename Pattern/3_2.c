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

    do
    {
        j = rows - i;
        do
        {
            printf("  ");
            j--;
        }while(j >= 0);

        int k = 1;
        do
        {
            printf("*   ");
            k++;
        }while (k <= i);

        printf("\n");
        i++;
    }while(i <= rows);

    i = rows - 1;
    do
    {
        j = rows - i;
        do
        {
            printf("  ");
            j--;
        }while (j >= 0);

        int k = 1;
        do 
        {
            printf("*   ");
            k++;
        }while (k <= i);

        printf("\n");
        i--;
    }while(i > 0);
     
}