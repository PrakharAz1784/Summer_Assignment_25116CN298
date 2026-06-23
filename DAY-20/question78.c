//Write a program to Check symmetric matrix
#include <stdio.h>

int main() {
    int r, c;

    printf("Enter rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("The matrix is not square, so it cannot be symmetric.\n");
        return 0;
    }

    int matrix[10][10];
    int isSymmetric = 1;

    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("\nThe matrix is Symmetric.\n");
    } else {
        printf("\nThe matrix is NOT Symmetric.\n");
    }

    return 0;
}