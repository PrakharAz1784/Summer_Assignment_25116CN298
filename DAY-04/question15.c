//program to check armstrong number
#include <stdio.h>
#include <math.h>

int main() {
    int n, num, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;

    while (num != 0) {
        digits++;
        num /= 10;
    }

    num = n;
    while (num != 0) {
        remainder = num % 10;
        result += pow(remainder, digits);
        num /= 10;
    }

    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}

