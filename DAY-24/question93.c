//Write a program to Check string rotation
#include <stdio.h>

int main() {
    int i, j, len1 = 0, len2 = 0, found = 0;
    char str1[1000], str2[1000], temp[2000];

    printf("enter first string : ");
    fgets(str1, sizeof(str1), stdin);

    printf("enter second string : ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        len1++;
    }
    str1[len1] = '\0';

    for(i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        len2++;
    }
    str2[len2] = '\0';

    if(len1 != len2) {
        printf("strings are not rotations\n");
        return 0;
    }

    for(i = 0; i < len1; i++) {
        temp[i] = str1[i];
    }

    for(i = 0; i < len1; i++) {
        temp[len1 + i] = str1[i];
    }

    temp[2 * len1] = '\0';

    for(i = 0; i <= (len1 * 2) - len2; i++) {
        found = 1;

        for(j = 0; j < len2; j++) {
            if(temp[i + j] != str2[j]) {
                found = 0;
                break;
            }
        }

        if(found == 1) {
            printf("strings are rotations of each other\n");
            return 0;
        }
    }

    printf("strings are not rotations\n");

    return 0;
}