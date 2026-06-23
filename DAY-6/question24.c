//Write a program to Find x^n without pow() 
#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (n): ");
    scanf("%d", &n);

    while (n > 0) {
        if (n % 2 == 1)
            result *= x;

        x *= x;
        n /= 2;
    }

    printf("Result = %lld\n", result);

    return 0;
}