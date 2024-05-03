/*========================================================================================
Write a program to print remark according to the grade obtained using switch statement.
========================================================================================*/

#include <stdio.h>

int main()
{
    char grade = 0;

    printf ("Enter the grade (A, B, C, D, F): ");
    scanf("%s",&grade);

    switch (grade)
    {
        case 'A':
            printf("Excellent! Keep up the good work.");
            break;
        case 'B':
            printf("Very good! Try a little harder to reach the top.");
            break;
        case 'C':
            printf("Good! But you can do better.");
            break;
        case 'D':
            printf("You passed, but consider reviewing your material.");
            break;
        case 'F':
            printf("Unfortunately, you failed. Study harder next time.");
            break;
        default:
            printf("Invalid grade entered.");
            break;
    }
    
}
