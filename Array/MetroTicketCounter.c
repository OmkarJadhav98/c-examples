#include <stdio.h>

int main() 
{
    char* ticket[5] = {"Swargate to Karve Nagar", "Swargate to Bund Garden", "Swargate to Vanaj", "Swargate to Ram wadi", "Swargate to Chinchwad"};
    int ticketPrice[5] = {10, 15, 20, 25, 30};
    int Destination = 0;
    int i = 0;

    printf("--------------------Welcome to the Pune-Metro Ticket Counter--------------------\n");

    while(i < 5) 
    {
        printf("Please Enter %d for %s\n", i, ticket[i]);
        i++;
    }

    printf("Please enter the number of the destination you want to reach: ");
    scanf("%d", &Destination);

    if(Destination >= 0 && Destination < 5) 
    {
        printf("Ticket for %s is: %d Rs\n", ticket[Destination], ticketPrice[Destination]);
    } 
    else 
    {
        printf("Invalid input. Please enter a number between 0 and 4.\n");
    }

    return 0;
}
