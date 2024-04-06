#include <stdio.h>

int main() 
{
    int No1 = 10;
    int No2 = 20;
    int INTEGER = No1 - No2;

    long iLong1 = 32151;
    long iLong2 = 651651;
    long LONG = iLong1 - iLong2;

    float No3 = 22.22f;
    float No4 = 10.10f;
    float FLOAT = No3 - No4;

    double iNo1 = 10.11111;
    double iNo2 = 20.11111;
    double DOUBLE = iNo1 - iNo2;

    char iNo3 = '8';
    char iNo4 = '2';
    int CHAR = (iNo3 - '0') - (iNo4 - '0');

    printf("Subtraction of integer is : %d\n", INTEGER);
    printf("Subtraction of long is : %ld\n", LONG);
    printf("Subtraction of float is : %.2f\n", FLOAT);
    printf("Subtraction of double is : %.5lf\n", DOUBLE);
    printf("Subtraction of character is : %d\n", CHAR);


    return 0;
}
