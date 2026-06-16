/*  Write a program to Print repeated character
    pattern.
    A
    BB
    CCC
    DDDD
    EEEEE

*/
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}