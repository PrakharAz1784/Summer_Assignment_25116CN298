//Write a program to Find column-wise sum
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

    printf("\nOutput Column-wise Sum:\n");
    for (int i = 0; i < c; i++) {
        int colSum = 0;

        for (int j = 0; j < r; j++) {
            colSum += matrix[j][i];
        }

        printf("Sum of column %d = %d\n", i + 1, colSum);
    }

    return 0;
}