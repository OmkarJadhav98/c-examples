/*=========================================================================================
Write a do-while loop that asks the user to enter two numbers.
The numbers should be added and the sum displayed.
The loop should ask the user whether he or she wishes to perform the operation again.
If so, the loop should repeat; otherwise it should terminate.
=========================================================================================*/

#include <stdio.h>

int main() {
    int number1, number2, sum;
    char choice;

    do {
        printf("Enter the first number: ");
        scanf("%d", &number1);

        printf("Enter the second number: ");
        scanf("%d", &number2);

        sum = number1 + number2;
        printf("The sum of %d and %d is: %d\n", number1, number2, sum);

        printf("Do you wish to perform another operation (y/n)? : ");
        scanf(" %c", &choice); // Note the space before %c to consume any newline characters

    } while (choice == 'y' || choice == 'Y');

    printf("Operation terminated.\n");
    return 0;
}
