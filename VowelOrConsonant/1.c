/*=================================================================================================
Write a program to Check whether a character is a vowel or consonant using switch statement.
=================================================================================================*/
#include <stdio.h>

int main()
{
    char character = 0;

    printf("Enter a Single Character: \n");
    scanf("%s",&character);

    switch (character)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%s is a vowel.\n",character);
            break;
        default:
            printf("%s is a consonant.\n",character);
            break;

    }
    return 0;
}

