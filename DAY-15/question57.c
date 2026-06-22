//Write a program to Reverse array.
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

    for (i = 0; i < n; i++) {
        ra[i] = a[n - 1 - i];
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ra[i]);
    }

    return 0;
}