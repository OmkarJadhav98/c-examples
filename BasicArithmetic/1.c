/*==================================================================================
Write a program to Menu driven program using switch statement.
( Find addition, subtraction, multiplication and division of to integer numbers )
===================================================================================*/

#include <stdio.h>

int main()
{
    int number1, number2, result;
    char operation;

    printf("Simple Calculator\n");
    printf("Choose an operation:\n");
    printf("+ for Addition\n");
    printf("- for Subtraction\n");
    printf("* for Multiplication\n");
    printf("/ for Division\n");

    printf("Enter your choice: ");
    scanf(" %c", &operation); // Notice the space before %c

    printf("Enter the first integer number: ");
    scanf("%d", &number1);

    printf("Enter the second integer number: ");
    scanf("%d", &number2);

    switch (operation)
    {
        case '+':
            result = number1 + number2;
            printf("The result of addition of %d + %d is: %d\n", number1, number2, result);
            break;
        case '-':
            result = number1 - number2;
            printf("The result of subtraction of %d - %d is: %d\n", number1, number2, result);
            break;
        case '*':
            result = number1 * number2;
            printf("The result of multiplication of %d * %d is: %d\n", number1, number2, result);
            break;
        case '/':
            if (number2 != 0)
            {
                result = number1 / number2;
                printf("The result of division of %d / %d is: %d\n", number1, number2, result);
            }
            else
            {
                printf("Division by zero is not possible.\n");
            }
            break;
        default:
            printf("Invalid operation! Please choose +, -, *, or /.\n");
            break;
    }
    return 0;
}
