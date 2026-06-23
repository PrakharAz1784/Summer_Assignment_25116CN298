//Write a program to Count vowels and consonants
#include <stdio.h>

int main() {
    int i, vowels = 0, consonants = 0;
    char str[1000];

    printf("enter full string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("number of vowels : %d\n", vowels);
    printf("number of consonants : %d\n", consonants);

    return 0;
}