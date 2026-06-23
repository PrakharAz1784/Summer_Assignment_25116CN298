//Write a program to Character frequency.
#include <stdio.h>

int main() {
    int i, j, count;
    char str[1000];

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    printf("\ncharacter frequencies:\n");

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] == ' ' || str[i] == '\0') {
            continue;
        }

        count = 1;

        for(j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
            if(str[i] == str[j]) {
                count++;
                str[j] = '\0';
            }
        }

        printf("%c appears %d times\n", str[i], count);
    }

    return 0;
}