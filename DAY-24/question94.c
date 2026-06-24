//Write a program to Compress a string
#include <stdio.h>

int main() {
    int i, count;
    char str[1000];

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    printf("compressed string : ");

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count = 1;

        while(str[i] == str[i + 1] && str[i + 1] != '\0' && str[i + 1] != '\n') {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    printf("\n");

    return 0;
}