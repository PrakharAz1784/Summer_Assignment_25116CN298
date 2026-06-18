//Write a program to Count even and odd elements.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int ceven = 0, codd = 0;

    printf("enter number of elements of array : ");
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("enter element %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            ceven++;
        else
            codd++;
    }

    printf("even elements are : %d\n", ceven);
    printf("odd elements are : %d\n", codd);

    free(a);

    return 0;
}