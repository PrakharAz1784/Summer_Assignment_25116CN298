//Write a program to Union of arrays.
#include <stdio.h>

int main() {
    int i, j, n;

    printf("enter nof of elements of the array : ");
    scanf("%d", &n);

    int a[n], b[n], u[50];
    int totalElements = n;

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
        u[i] = a[i];
    }

    for(i = 0; i < n; i++) {
        int isDuplicate = 0;

        for(j = 0; j < totalElements; j++) {
            if(b[i] == u[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if(!isDuplicate) {
            u[totalElements] = b[i];
            totalElements++;
        }
    }

    printf("union array : ");
    for(i = 0; i < totalElements; i++) {
        printf("%d ", u[i]);
    }

    return 0;
}