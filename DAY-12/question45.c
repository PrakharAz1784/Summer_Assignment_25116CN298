//Write a program to Write function for palindrome. 
#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reverse = 0, rem;

    while (n > 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }

    return original == reverse;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a Palindrome number", n);
    else
        printf("%d is not a Palindrome number", n);

    return 0;
}