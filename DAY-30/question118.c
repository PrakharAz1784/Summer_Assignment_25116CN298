// Write a program to Create mini library system.
#include <stdio.h>
#include <string.h>

int main() {
    int id[3] = {101, 102, 103};
    char title[3][30] = {"C++ Basics", "Data Structures", "Clean Code"};
    char author[3][30] = {"Bjarne", "Thomas", "Robert"};
    int issued[3] = {0, 0, 1};

    int choice, bookid, i;

    printf("1. Display Books\n");
    printf("2. Issue Book\n");
    printf("3. Return Book\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

    case 1:
        printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
        for(i = 0; i < 3; i++) {
            printf("%d\t%s\t%s\t", id[i], title[i], author[i]);

            if(issued[i] == 0)
                printf("Available\n");
            else
                printf("Issued\n");
        }
        break;

    case 2:
        printf("Enter Book ID: ");
        scanf("%d", &bookid);

        for(i = 0; i < 3; i++) {
            if(id[i] == bookid) {
                if(issued[i] == 0) {
                    issued[i] = 1;
                    printf("Book Issued");
                }
                else
                    printf("Book Already Issued");
                return 0;
            }
        }

        printf("Book Not Found");
        break;

    case 3:
        printf("Enter Book ID: ");
        scanf("%d", &bookid);

        for(i = 0; i < 3; i++) {
            if(id[i] == bookid) {
                if(issued[i] == 1) {
                    issued[i] = 0;
                    printf("Book Returned");
                }
                else
                    printf("Book Already Available");
                return 0;
            }
        }

        printf("Book Not Found");
        break;

    default:
        printf("Invalid Choice");
    }

    return 0;
}