//Write a program to Check palindrome string.
#include <stdio.h>

int main() {
    int i, j, length = 0, flag = 1;
    char str[1000];

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        length++;
    }

    j = length - 1;

    for(i = 0; i < j; i++) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
        j--;
    }

    if(flag == 1) {
        printf("string is a palindrome\n");
    } else {
        printf("string is not a palindrome\n");
    }

    return 0;
}