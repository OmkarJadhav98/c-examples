#include <stdio.h>

// Function to print numbers from 1 to the given range

void incrementOperatorPrints(int range) 
{
    printf("------------- Increment operator output Start ---------------\n");
    
    int no = 1;                         // Initialize no to 1

    while (no <= range)                // Loop until no is less than or equal to range
    {             
    printf("%d\n", no);              // Print the value of no
        no++;                       // Increment no by 1
    }
    printf("------------- Increment operator output ends here ---------------\n");
}

int main() 
{
    printf("Please enter the Number: \n");

    int range = 0;                          // Declare a variable to store the range
    scanf("%d", &range);                   // Read the range from the user

    incrementOperatorPrints(range);       // Call the function with the given range

    return 0;
}
