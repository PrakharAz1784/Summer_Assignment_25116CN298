//Write a program to Rotate array left.
#include <stdio.h>

int main() {
    int i, n;

    printf("Enter no of elements of array: ");
    scanf("%d", &n);

    int a[n];
    int ra[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        ra[i] = a[i + 1];
    }

    ra[n - 1] = a[0];

    printf("Left rotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ra[i]);
    }

    return 0;
}