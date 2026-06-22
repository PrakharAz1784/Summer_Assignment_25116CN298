//Write a program to Find missing number in array.
#include <stdio.h>

int main() {
    int i, A = 0, d = 1, n, asum = 0, tsum = 0, mterm = 0;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    int a[n - 1];

    for (i = 0; i < n - 1; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        asum += a[i];
    }

    A = a[0];
    d = 1;

    tsum = (n * (2 * A + (n - 1) * d)) / 2;

    mterm = tsum - asum;

    printf("Missing term: %d", mterm);

    return 0;
}