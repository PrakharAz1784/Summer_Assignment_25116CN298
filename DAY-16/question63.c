//Write a program to Find pair with given sum.
#include <stdio.h>

int main() {
    int i, j, target, n;

    printf("Enter no of elements of array: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                printf("Pair with given sum: %d %d\n", a[i], a[j]);
            }
        }
    }

    return 0;
}