//Write a program to Convert lowercase to uppercase.
#include <stdio.h>

int main() {
    int i;
    char str[1000];

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("uppercase string : %s\n", str);

    return 0;
}