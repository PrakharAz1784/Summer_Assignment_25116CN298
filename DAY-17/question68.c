//Write a program to Find common elements.
#include <stdio.h>

int main() {
    int i, j, n;

    printf("enter nof of elements of the array : ");
    scanf("%d", &n);

    int a[n];
    int b[n];
    int in[50] = {0};
    int totalElements = 0;

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
        for(j = 0; j < n; j++) {
            if(a[i] == b[j]) {
                in[totalElements] = a[i];
                totalElements++;
                break;
            }
        }
    }

    printf("common elements of array are : ");
    for(i = 0; i < totalElements; i++) {
        printf("%d ", in[i]);
    }

    return 0;
}