#include <stdio.h>

// Base struct: Calculation
struct Calculation {
    double (*perform)(double num1, double num2); // Function pointer
};

// Derived struct: Addition (inherits from Calculation)
struct Addition {
    struct Calculation base;
};

double add(double num1, double num2) {
    return num1 + num2;
}

// Derived struct: Subtraction (inherits from Calculation)
struct Subtraction {
    struct Calculation base;
};

double subtract(double num1, double num2) {
    return num1 - num2;
}

// Derived struct: Multiplication (inherits from Calculation)
struct Multiplication {
    struct Calculation base;
};

double multiply(double num1, double num2) {
    return num1 * num2;
}

// Derived struct: Division (inherits from Calculation)
struct Division {
    struct Calculation base;
};

double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
}

int main() {
    double num1, num2;
    char operation;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    struct Calculation* calc;

    switch (operation) {
        case '+':
            calc = (struct Calculation*)&add;
            break;
        case '-':
            calc = (struct Calculation*)&subtract;
            break;
        case '*':
            calc = (struct Calculation*)&multiply;
            break;
        case '/':
            calc = (struct Calculation*)&divide;
            break;
        default:
            printf("Invalid operation!\n");
            return 1;
    }

    double result = calc->perform(num1, num2);
    printf("Result: %.2lf\n", result);

    return 0;
}
