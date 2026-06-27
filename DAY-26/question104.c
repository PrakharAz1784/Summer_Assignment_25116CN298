//Write a program to Create quiz application.
#include <stdio.h>

int main() {
    int score = 0;
    char ans;

    printf("--- Welcome to the Quiz Application! ---\n");
    printf("Answer by entering option letter (A, B, C, or D)\n\n");

    printf("Q1. What is the capital of France?\n");
    printf("A. Berlin\nB. Madrid\nC. Paris\nD. Rome\n");
    printf("Your answer: ");
    scanf(" %c", &ans);

    if(ans == 'C' || ans == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }

    printf("Q2. Which planet is known as the Red Planet?\n");
    printf("A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n");
    printf("Your answer: ");
    scanf(" %c", &ans);

    if(ans == 'B' || ans == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B.\n\n");
    }

    printf("Q3. What is the largest ocean on Earth?\n");
    printf("A. Atlantic\nB. Indian\nC. Arctic\nD. Pacific\n");
    printf("Your answer: ");
    scanf(" %c", &ans);

    if(ans == 'D' || ans == 'd') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is D.\n\n");
    }

    printf("--- Quiz Finished! ---\n");
    printf("Your total score: %d out of 3\n", score);

    return 0;
}
