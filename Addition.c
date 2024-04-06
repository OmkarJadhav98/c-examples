#include <stdio.h>

int main() 
{
    int No1 = 10;
    int No2 = 20;
    int INTEGER = No1 + No2;

    long iLong1 = 32151;
    long iLong2 = 651651;
    long LONG = iLong1 + iLong2;

    float No3 = 22.22f;
    float No4 = 10.10f;
    float FLOAT = No3 + No4;

    double iNo1 = 10.11111;
    double iNo2 = 20.11111;
    double DOUBLE = iNo1 + iNo2;

    char iNo3 = '8';
    char iNo4 = '2';
    int CHAR = (iNo3 - '0') + (iNo4 - '0');

    char No5[] = "City =";
    char No6[] = " Pune";
    char STRING[50];
    sprintf(STRING, "%s%s", No5, No6);

    printf("Addition of integer is : %d\n", INTEGER);
    printf("Addition of long is : %ld\n", LONG);
    printf("Addition of float is : %.2f\n", FLOAT);
    printf("Addition of double is : %.5lf\n", DOUBLE);
    printf("Addition of character is : %d\n", CHAR);
    printf("Addition of string is : %s\n", STRING);

    return 0;
}
