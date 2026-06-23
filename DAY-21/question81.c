//Write a program to Find string length without strlen().
#include <stdio.h>

int main() {
    int i, length = 0;
    char str[1000];

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        length++;
    }

    printf("length of string : %d\n", length);

    return 0;
}