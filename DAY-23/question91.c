//Write a program to Check anagram strings.

#include <stdio.h>

int main() {
    int i, j, len1 = 0, len2 = 0;
    char str1[1000], str2[1000];
    char temp;

    printf("enter first string : ");
    fgets(str1, sizeof(str1), stdin);

    printf("enter second string : ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        len1++;
    }

    for(i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        len2++;
    }

    if(len1 != len2) {
        printf("strings are not anagrams\n");
        return 0;
    }

    for(i = 0; i < len1 - 1; i++) {
        for(j = 0; j < len1 - i - 1; j++) {
            if(str1[j] > str1[j + 1]) {
                temp = str1[j];
                str1[j] = str1[j + 1];
                str1[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < len2 - 1; i++) {
        for(j = 0; j < len2 - i - 1; j++) {
            if(str2[j] > str2[j + 1]) {
                temp = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < len1; i++) {
        if(str1[i] != str2[i]) {
            printf("strings are not anagrams\n");
            return 0;
        }
    }

    printf("strings are anagrams\n");

    return 0;
}