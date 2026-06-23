//Write a program to Transpose matrix
#include <stdio.h>

int main() {
    int i, j, r, c;

    printf("enter no of rows : ");
    scanf("%d", &r);

    printf("enter no of columns : ");
    scanf("%d", &c);

    int a[r][c];
    int t[c][r];

    printf("\n--- Enter Original Matrix ---\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Enter element at row %d, col %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of matrix : \n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}