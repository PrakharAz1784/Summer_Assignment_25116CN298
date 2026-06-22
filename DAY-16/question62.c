//Write a program to Find maximum frequency element.
#include <stdio.h>

int main() {
    int i, e, n;

    printf("Enter no of elements of array: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int freq = 0;

    printf("Enter the element to count frequency: ");
    scanf("%d", &e);

    for (i = 0; i < n; i++) {
        if (a[i] == e) {
            freq++;
        }
    }

    printf("Maximum frequency of the element: %d", freq);

    return 0;
}