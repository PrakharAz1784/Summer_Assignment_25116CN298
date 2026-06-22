//Write a program to Move zeroes to end
#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the no of elements in array: ");
    scanf("%d", &n);

    int a[n];
    int ua[n];
    int index = 0;

    for (i = 0; i < n; i++) {
        ua[i] = 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] != 0) {
            ua[index] = a[i];
            index++;
        }
    }

    printf("Array with zeros at end: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ua[i]);
    }

    return 0;
}