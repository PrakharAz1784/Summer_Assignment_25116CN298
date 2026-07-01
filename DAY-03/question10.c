// Program to print prime numbers in a given range
#include <stdio.h>

int main() {
    int a, b, i, j;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Prime numbers are:\n");

    for(i = a; i <= b; i++) {
        int count = 0;

        for(j = 1; j <= i; j++) {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", i);
    }

    return 0;
}