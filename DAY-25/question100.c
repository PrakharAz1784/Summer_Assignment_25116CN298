//Write a program to Sort words by length.
#include <stdio.h>
#include <string.h>

int main() {
    int i, j, n, len1, len2;
    char temp[100];

    printf("enter number of words : ");
    scanf("%d", &n);

    char words[n][100];

    printf("enter words :\n");
    for(i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {

            len1 = 0;
            while(words[j][len1] != '\0') {
                len1++;
            }

            len2 = 0;
            while(words[j + 1][len2] != '\0') {
                len2++;
            }

            if(len1 > len2) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("\nwords sorted by length :\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}