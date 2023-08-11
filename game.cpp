#include <stdio.h>
#include <stdlib.h>


int main() {

    
    int secretNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;
    const int maxAttempts = 5;

    printf("Welcome to the Guess the Number game!\n");
    printf("I have selected a number between 1 and 100. You have %d attempts to guess it.\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Attempt %d/%d: Enter your guess: ", attempts + 1, maxAttempts);
        scanf("%d", &userGuess);
        attempts++;

        if (userGuess < secretNumber) {
            printf("Too low! ");
        } else if (userGuess > secretNumber) {
            printf("Too high! ");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", secretNumber, attempts);
            break;
        }

        if (attempts < maxAttempts) {
            printf("Try again.\n");
        } else {
            printf("Sorry, you've used all your attempts. The correct number was %d.\n", secretNumber);
        }
    }

    return 0;
}