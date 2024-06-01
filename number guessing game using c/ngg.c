#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;
    
    // Initialize random number generator
    srand(time(NULL));
    randomNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100.\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        }
    } while (guess != randomNumber);
    
    printf("Congratulations! You guessed the correct number (%d) in %d attempts!\n", randomNumber, attempts);
    
    return 0;
}
