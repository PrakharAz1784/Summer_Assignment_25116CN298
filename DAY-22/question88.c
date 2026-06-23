//Write a program to Remove spaces from string.
#include <stdio.h>

int main() {
    int i, j = 0;
    char str[1000], result[1000];

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("string without spaces : %s\n", result);

    return 0;
}