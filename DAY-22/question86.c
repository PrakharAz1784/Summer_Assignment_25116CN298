//Write a program to Count words in a sentence.
#include <stdio.h>

int main() {
    int i, words = 1;
    char str[1000];

    printf("enter full sentence : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n') {
            words++;
        }
    }

    if(str[0] == '\n' || str[0] == '\0') {
        words = 0;
    }

    printf("total words : %d\n", words);

    return 0;
}