//Write a program to Subtract matrices.
#include <stdio.h>

int main() {
    int i, j, r, c;

    printf("enter now of rows : ");
    scanf("%d", &r);

    printf("enter no of columns : ");
    scanf("%d", &c);

    int a[r][c];
    int b[r][c];
    int s[r][c];

    printf("enter first matrix : ");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter second matrix : ");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            s[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("difference of matrices : \n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}