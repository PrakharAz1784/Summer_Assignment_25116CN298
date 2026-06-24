//Write a program to Find longest word
#include <stdio.h>

int main() {
    int i, word_start = 0, current_len = 0, max_len = 0, longest_start = 0;
    char str[1000];

    printf("enter full sentence : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++) {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            if(current_len > max_len) {
                max_len = current_len;
                longest_start = word_start;
            }

            current_len = 0;
            word_start = i + 1;
        } else {
            current_len++;
        }

        if(str[i] == '\n' || str[i] == '\0') {
            break;
        }
    }

    printf("longest word : ");
    for(i = longest_start; i < longest_start + max_len; i++) {
        printf("%c", str[i]);
    }

    printf("\n");
    printf("length of longest word : %d\n", max_len);

    return 0;
}
