#include <stdio.h>

int main() 
{
    int No1 = 10;
    int No2 = 2;
    int INTEGER = No1 * No2;

    long iLong1 = 32151;
    long iLong2 = 6516;
    long LONG = iLong1 * iLong2;

    float No3 = 22.22f;
    float No4 = 10.10f;
    float FLOAT = No3 * No4;

    double iNo1 = 10.11111;
    double iNo2 = 20.11111;
    double DOUBLE = iNo1 * iNo2;

    char iNo3 = '8';
    char iNo4 = '2';
    int CHAR = (iNo3 - '0') * (iNo4 - '0');

    printf("Multiplication of integer is : %d\n", INTEGER);
    printf("Multiplication of long is : %ld\n", LONG);
    printf("Multiplication of float is : %.2f\n", FLOAT);
    printf("Multiplication of double is : %.5lf\n", DOUBLE);
    printf("Multiplication of character is : %d\n", CHAR);


    return 0;
}
