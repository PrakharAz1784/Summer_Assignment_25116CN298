//program to find nth fibonacci term
#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, c;

    if (n == 0) return 0;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;

    printf("Enter a Fibonacci term number: ");
    scanf("%d", &n);

    printf("Fibonacci term %d is %d\n", n, fibonacci(n));

    return 0;
}