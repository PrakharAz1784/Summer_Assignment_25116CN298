//Write a program to Find largest prime factor
#include <stdio.h>

int main() {
    long long n, i, lfact = 0;

    printf("Enter number: ");
    scanf("%lld", &n);

    for (i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            lfact = i;
            n /= i;
        }
    }

    if (n > 1) {
        lfact = n;
    }

    if (lfact == 0) {
        printf("No prime factor found\n");
    } else {
        printf("Largest prime factor is: %lld\n", lfact);
    }

    return 0;
}