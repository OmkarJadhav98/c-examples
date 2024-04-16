#include <stdio.h>

int main() {
    int BowlingSpeed[6] = 0;
    int position = 0;

    while(position < 6) 
    {
        printf("Please Enter bowling speed of a %d bowl: ", position+1);
        scanf("%d", &BowlingSpeed[position]);
        position++;
    }

    printf("================================\n");
    printf("Speed of ball in a over are: \n");
    printf("================================\n");

    position = 0;
    while(position < 6) 
    {
        printf("Speed of %d ball = %d kmph\n", position+1, BowlingSpeed[position]);
        position++;
    }

    return 0;
}
