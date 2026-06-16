//Write a program to Convert decimal to binary

#include <stdio.h>

int main() {
    int dec, i = 0, n, bin[32];

    printf("Enter decimal number: ");
    scanf("%d", &dec);

    if (dec == 0) {
        printf("Binary number: 0\n");
        return 0;
    }

    while (dec > 0) {
        bin[i] = dec % 2;
        dec = dec / 2;
        i++;
    }

    printf("Binary number: ");
    for (n = i - 1; n >= 0; n--) {
        printf("%d", bin[n]);
    }

    printf("\n");
    return 0;
}