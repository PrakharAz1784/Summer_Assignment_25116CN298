//Write a program to Find row-wise sum
#include <stdio.h>

int main() {
    int r, c;

    printf("Enter rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);

    int matrix[10][10];

    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOutput Row-wise Sum:\n");
    for (int i = 0; i < r; i++) {
        int rowSum = 0;

        for (int j = 0; j < c; j++) {
            rowSum += matrix[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}