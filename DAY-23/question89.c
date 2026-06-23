//Write a program to Find first non-repeating character.
#include <stdio.h>

int main() {
    int i, j, is_repeating;
    char str[1000];

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        is_repeating = 0;

        if(str[i] == ' ') {
            continue;
        }

        for(j = 0; str[j] != '\0' && str[j] != '\n'; j++) {
            if(str[i] == str[j] && i != j) {
                is_repeating = 1;
                break;
            }
        }

        if(is_repeating == 0) {
            printf("first non-repeating character : %c\n", str[i]);
            return 0;
        }
    }

    printf("no non-repeating character found\n");

    return 0;
}