//Write a program to Frequency of an element.
#include <stdio.h>

int main() {
    int i, n, ecount = 0, target = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter element to count frequency: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (a[i] == target) {
            ecount++;
        }
    }

    printf("Frequency of the element: %d", ecount);

    return 0;
}