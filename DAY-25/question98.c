//Write a program to Find common characters in strings
#include <stdio.h>

int main() {
    int i, j, k, is_duplicate;
    char str1[1000], str2[1000];

    printf("enter first string : ");
    fgets(str1, sizeof(str1), stdin);

    printf("enter second string : ");
    fgets(str2, sizeof(str2), stdin);

    printf("common characters : ");

    for(i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        if(str1[i] == ' ') {
            continue;
        }

        is_duplicate = 0;

        for(k = 0; k < i; k++) {
            if(str1[i] == str1[k]) {
                is_duplicate = 1;
                break;
            }
        }

        if(is_duplicate == 1) {
            continue;
        }

        for(j = 0; str2[j] != '\0' && str2[j] != '\n'; j++) {
            if(str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                str2[j] = '\0';
                break;
            }
        }
    }

    printf("\n");

    return 0;
}