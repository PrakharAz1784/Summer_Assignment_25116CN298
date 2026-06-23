//Write a program to Merge arrays.
#include <stdio.h>

int main() {
    int i, n;

    printf("enter nof of elements of the array : ");
    scanf("%d", &n);

    int a[n], b[n], m[n];

    printf("enter first array elements\n");
    for(i = 0; i < n; i++) {
        printf("enter element %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("enter second array elements\n");
    for(i = 0; i < n; i++) {
        printf("enter element %d : ", i + 1);
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n; i++) {
        m[i] = a[i] + b[i];
    }

    printf("merged array : ");
    for(i = 0; i < n; i++) {
        printf("%d ", m[i]);
    }

    return 0;
}