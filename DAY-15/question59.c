//Program to rotate array right.
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

    ra[0] = a[n - 1];

    for (i = 1; i < n; i++) {
        ra[i] = a[i - 1];
    }

    printf("Right rotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ra[i]);
    }

    return 0;
}