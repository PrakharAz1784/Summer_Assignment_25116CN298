//Write a program to Find first repeating character
#include <stdio.h>

int main() {
    int i, j, found = 0;
    char str[1000];

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {

        if(str[i] == ' ') {
            continue;
        }

        for(j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
            if(str[i] == str[j]) {
                printf("first repeating character : %c\n", str[i]);
                found = 1;
                break;
            }
        }

        if(found == 1) {
            return 0;
        }
    }

    printf("no repeating character found\n");

    return 0;
}