#include <stdio.h>

// Function to print numbers from the given range to 1

void decrementOperatorPrints(int range) 
{
    printf("------------- Decrement operator output ---------------\n");

    while (range >= 1)                      // Loop until range is greater than or equal to 1
    {    
        printf("%d\n", range);              // Print the value of range
        range--;                            // Decrement range by 1
    }
    printf("------------- Decrement operator output ends here ---------------\n");
}

int main() 
{
    printf("Please enter the range: \n");
   
    int range = 0;                       // Declare a variable to store the range
    scanf("%d", &range);                 // Read the range from the user    
    
    decrementOperatorPrints(range);     // Call the function with the given range

    return 0;
}
