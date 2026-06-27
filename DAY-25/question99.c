//Write a program to Sort names alphabetically
#include <stdio.h>
#include <string.h>

int main() {
    int i, j, n;
    char temp[100];
    
    printf("enter number of names : ");
    scanf("%d", &n);
    getchar();

    char names[n][100];

    printf("enter names :\n");
    for(i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        int len = strlen(names[i]);
        if(names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nnames in alphabetical order :\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}