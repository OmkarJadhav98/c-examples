/*=================================================================================
Write a program to Find the number of days in a month using a switch statement.
=================================================================================*/
#include <stdio.h>

int main()
{
    int MonthNumber = 0;
    int NumberOfDays = 0;
    char *MonthName = 0;

    printf("Enter the Month number (1-12): ");
    scanf("%d",&MonthNumber);

    int year = 0;
    printf("Enter a year: ");
    scanf("%d",&year);

    switch (MonthNumber) 
    {
        case 1:
            MonthName = "January";
            NumberOfDays = 31;
            break;
        case 2:
            MonthName = "February";
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                NumberOfDays = 29;
            } else {
                NumberOfDays = 28;
            }
            break;
        case 3:
            MonthName = "March";
            NumberOfDays = 31;
            break;
        case 4:
            MonthName = "April";
            NumberOfDays = 30;
            break;
        case 5:
            MonthName = "May";
            NumberOfDays = 31;
            break;
        case 6:
            MonthName = "June";
            NumberOfDays = 30;
            break;
        case 7:
            MonthName = "July";
            NumberOfDays = 31;
            break;
        case 8:
            MonthName = "August";
            NumberOfDays = 31;
            break;
        case 9:
            MonthName = "September";
            NumberOfDays = 30;
            break;
        case 10:
            MonthName = "October";
            NumberOfDays = 31;
            break;
        case 11:
            MonthName = "November";
            NumberOfDays = 30;
            break;
        case 12:
            MonthName = "December";
            NumberOfDays = 31;
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.");
            break;
    }
    
    printf("The month of %s has %d days.",MonthName, NumberOfDays);
    
    return 0;
}

