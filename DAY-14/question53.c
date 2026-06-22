//Write a program to Linear search.
#include <stdio.h>

int main() {
    int n, i, target, result = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (a[i] == target) {
            result = i;
            break;
        }
    }

    if (result != -1) {
        printf("Element found at index: %d", result);
    } else {
        printf("Element not found");
    }

    return 0;
}