//Write a program to Convert binary to decimal.
#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        remainder = binary % 10;    
        decimal += remainder * base; 
        base *= 2;                   
        binary /= 10;              
    }

    printf("Decimal number: %d\n", decimal);

    return 0;
}