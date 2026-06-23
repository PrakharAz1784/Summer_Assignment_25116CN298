//Write a program to Find maximum occurring character
#include <stdio.h>

int main() {
    int i, j, count, max_count = 0;
    char str[1000];
    char max_char;

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] == ' ') {
            continue;
        }

        count = 0;

        for(j = 0; str[j] != '\0' && str[j] != '\n'; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }

        if(count > max_count) {
            max_count = count;
            max_char = str[i];
        }
    }

    if(max_count > 0) {
        printf("maximum occurring character : %c (appears %d times)\n", max_char, max_count);
    } else {
        printf("no characters found\n");
    }

    return 0;
}