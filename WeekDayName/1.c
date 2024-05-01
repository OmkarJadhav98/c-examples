/* Write a program to read a weekday number and print weekday name using switch statement. */

#include <stdio.h>

int main()
{
    int WeekdayNumber = 0;

    printf("Enter a Weekday number (1-7): \n");
    scanf("%d",&WeekdayNumber);

    switch(WeekdayNumber)
    {
        case 1:
        printf("Monday");
            break;
        case 2:
        printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
        printf("Invalid weekday number. Please enter a number between 1 and 7.");
    }
    return 0;
}

