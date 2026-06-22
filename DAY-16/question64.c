// Write a program to Remove duplicates from array.
#include <stdio.h>

int main() {
    int n;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int Size = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < Size; j++) {
            if (a[i] == a[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate == 0) {
            a[Size] = a[i];
            Size++;
        }
    }

    printf("Updated array: ");
    for (int i = 0; i < Size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}