//Write a program to Write function to find sum of two numbers.
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Sum of the numbers: %d", sum(a, b));

    return 0;
}