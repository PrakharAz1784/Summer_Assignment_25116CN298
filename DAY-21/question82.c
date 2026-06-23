//Write a program to Reverse a string
#include <stdio.h>

int main() {
    int i, length = 0;
    char str[1000];

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        length++;
    }

    printf("reversed string : ");

    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}