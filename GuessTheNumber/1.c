/*========================================================================================================
Write a program that generates a random number and asks the user to guess what the number is.
If the user's guess is higher than the random number, the program should display "Too high, try again."
If the user's guess is lower than the random number, the program should display "Too low, try again."
The program should use a loop that repeats until the user correctly guesses the random number.
========================================================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int min = 1;
    int max = 100; // You can adjust the range as needed
    int randomNumber = rand() % (max - min + 1) + min;

    printf("Welcome to the Guess the Number game!\n");
    printf("I have selected a random number between %d and %d.\n", min, max);
    printf("Try to guess the number!\n");

    int userGuess;
    do {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        if (userGuess < randomNumber) {
            printf("Too low, try again.\n");
        } else if (userGuess > randomNumber) {
            printf("Too high, try again.\n");
        }
    } while (userGuess != randomNumber);

    printf("Congratulations! You guessed the correct number: %d\n", randomNumber);
    return 0;
}
