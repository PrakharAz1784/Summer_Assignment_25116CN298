// Write a program to Create menu-driven string operations system.
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, choice, pos, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length (excluding newline)
    while(str[len] != '\0' && str[len] != '\n')
        len++;

    str[len] = '\0';

    printf("\n1. Reverse String");
    printf("\n2. Convert to Uppercase");
    printf("\n3. Check Palindrome");
    printf("\n4. Find Character at Position");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {

    case 1:
        printf("Reversed String: ");
        for(i = len - 1; i >= 0; i--)
            printf("%c", str[i]);
        break;

    case 2:
        for(i = 0; i < len; i++) {
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
        printf("Uppercase String: %s", str);
        break;

    case 3:
        for(i = 0; i < len / 2; i++) {
            if(str[i] != str[len - 1 - i]) {
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("Palindrome");
        else
            printf("Not Palindrome");
        break;

    case 4:
        printf("Enter position: ");
        scanf("%d", &pos);

        if(pos >= 1 && pos <= len)
            printf("Character = %c", str[pos - 1]);
        else
            printf("Invalid Position");
        break;

    default:
        printf("Invalid Choice");
    }

    return 0;
}