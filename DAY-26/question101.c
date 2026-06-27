//Write a program to Create number guessing game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, guess, target;
    int flag = 0;

    srand(time(0));

    target = (rand() % 100) + 1;

    printf("Guess the secret number between 1 and 100\n");
    printf("You have exactly 4 chances!\n\n");

    for(i = 1; i <= 4; i++) {
        printf("Chance %d - Enter your guess: ", i);
        scanf("%d", &guess);

        if(guess > target) {
            printf("Too high!\n\n");
        }
        else if(guess < target) {
            printf("Too low!\n\n");
        }
        else {
            printf("\nYou won! Correct guess.\n");
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("Game Over! You ran out of chances.\n");
        printf("The correct number was: %d\n", target);
    }

    return 0;
}