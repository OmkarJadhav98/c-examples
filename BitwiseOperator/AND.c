#include <stdio.h>

int main() 
{
    int No1 = 0;
    int No2 = 0;
    int result = 0;

    printf("Please enter first value:\n");
    scanf("%d", &No1);

    printf("Please enter second value:\n");
    scanf("%d", &No2);

    result = No1 & No2;
    printf("bitwise AND result: %d\n", result);

    return 0;
}
