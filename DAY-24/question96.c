//Write a program to Remove duplicate characters.
#include <stdio.h>

int main() {
    int i, j;
    char str[1000], result[1000];
    int k = 0;

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        for(j = 0; j < k; j++) {
            if(str[i] == result[j]) {
                break;
            }
        }
        if(j == k) {
            result[k++] = str[i];
        }
    }
    result[k] = '\0';

    printf("string after removing duplicates : %s\n", result);

    return 0;
}

