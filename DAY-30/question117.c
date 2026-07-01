// Write a program to Create student record system using arrays and strings.
#include <stdio.h>
#include <string.h>

int main() {
    int roll[3] = {101, 102, 103};
    char name[3][20] = {"John", "Jane", "Alex"};
    float marks[3] = {85.5, 92.0, 74.2};

    int choice, i;
    char search[20];

    printf("1. Display Records\n");
    printf("2. Search Student\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

    case 1:
        printf("\nRoll\tName\tMarks\n");
        for(i = 0; i < 3; i++) {
            printf("%d\t%s\t%.1f\n", roll[i], name[i], marks[i]);
        }
        break;

    case 2:
        printf("Enter student name: ");
        scanf("%s", search);

        for(i = 0; i < 3; i++) {
            if(strcmp(name[i], search) == 0) {
                printf("\nRoll No : %d", roll[i]);
                printf("\nName    : %s", name[i]);
                printf("\nMarks   : %.1f\n", marks[i]);
                return 0;
            }
        }

        printf("Student Not Found");
        break;

    default:
        printf("Invalid Choice");
    }

    return 0;
}