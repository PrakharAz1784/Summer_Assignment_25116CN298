//Write a program to Create library management system
#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[100];
    int is_issued;
};

int main() {
    int i, choice, search_id;
    int total_books = 3;

    struct Book b[3] = {
        {101, "The C++ Programming Language", "Bjarne Stroustrup", 0},
        {102, "Introduction to Algorithms", "Thomas Cormen", 0},
        {103, "Clean Code", "Robert Martin", 1}
    };

    printf("--- Welcome to the Library Management System ---\n");
    printf("1. Display All Books\n");
    printf("2. Issue a Book (Check Out)\n");
    printf("3. Return a Book (Check In)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("\nID\tTitle\t\t\t\tAuthor\t\t\tStatus\n");
        printf("--------------------------------------------------------------------------\n");

        for(i = 0; i < total_books; i++) {
            printf("%d\t%s", b[i].id, b[i].title);

            if(strlen(b[i].title) < 16)
                printf("\t\t\t");
            else
                printf("\t");

            printf("%s\t\t", b[i].author);

            if(b[i].is_issued == 1)
                printf("Issued\n");
            else
                printf("Available\n");
        }
    }
    else if(choice == 2) {
        int found = 0;

        printf("\nEnter Book ID to issue: ");
        scanf("%d", &search_id);

        for(i = 0; i < total_books; i++) {
            if(b[i].id == search_id) {
                found = 1;

                if(b[i].is_issued == 0) {
                    b[i].is_issued = 1;
                    printf("Success! '%s' has been issued to you.\n", b[i].title);
                } else {
                    printf("Sorry, this book is already issued to someone else.\n");
                }
                break;
            }
        }

        if(found == 0)
            printf("Book ID not found in library database.\n");
    }
    else if(choice == 3) {
        int found = 0;

        printf("\nEnter Book ID to return: ");
        scanf("%d", &search_id);

        for(i = 0; i < total_books; i++) {
            if(b[i].id == search_id) {
                found = 1;

                if(b[i].is_issued == 1) {
                    b[i].is_issued = 0;
                    printf("Success! '%s' has been returned to the shelves.\n", b[i].title);
                } else {
                    printf("This book was never issued. It is already in the library.\n");
                }
                break;
            }
        }

        if(found == 0)
            printf("Book ID not found in library database.\n");
    }
    else {
        printf("\nInvalid choice selection!\n");
    }

    return 0;
}