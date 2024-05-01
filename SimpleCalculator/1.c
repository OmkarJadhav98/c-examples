/*===================================================================
Write a program to create simple calculator using switch Statement.
=====================================================================*/
#include <stdio.h>

int main()
{
    double number1, number2, result;
    char operator = 0;

    printf("Choose an operator: +, -, *, or /:\n");
    scanf(" %c",&operator);

    printf("Enter first number:\n");
    scanf("%lf",&number1);

    printf("Enter second number:\n");
    scanf("%lf",&number2);

    switch (operator)
    {
        case '+':
            result = number1 + number2;
            printf("%.2lf + %.2lf = %.2lf\n", number1, number2, result); // Use %lf to print double values and format to 2 decimal places
            break;
        case '-':
            result = number1 - number2;
            printf("%.2lf - %.2lf = %.2lf\n", number1, number2, result);
            break;
        case '*':
            result = number1 * number2;
            printf("%.2lf * %.2lf = %.2lf\n", number1, number2, result);
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                printf("%.2lf / %.2lf = %.2lf\n", number1, number2, result);
            } 
            else
            {
                printf("Division by zero is not possible.\n");
            }
            break;
        default:
            printf("Invalid operator! Please choose +, -, *, or /.\n");
            break;
    }
    return 0;
}


