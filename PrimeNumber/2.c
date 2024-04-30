#include <stdio.h>
#include <stdbool.h> // Include the header for bool data type

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }

    for (int i = 2; i * i <= num; ++i) // Use i * i instead of sqrt(num) for efficiency
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (isPrime(number))
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
