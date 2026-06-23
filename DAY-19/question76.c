//Write a program to Find diagonal sum
#include <stdio.h>

int main() {
    int i, j, size, sum = 0;

    printf("enter size of square matrix (rows/columns) : ");
    scanf("%d", &size);

    int a[size][size];

    printf("\n--- Enter Matrix Elements ---\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("Enter element at row %d, col %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < size; i++) {
        sum = sum + a[i][i];
    }

    printf("\nSum of primary diagonal elements : %d\n", sum);

    return 0;
}