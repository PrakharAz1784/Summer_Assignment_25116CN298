#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[100];
};

int main() {
    int i, choice;
    char search_name[50];

    struct Contact c[3] = {
        {"prakhar", "9876543210", "prakhar@email.com"},
        {"shivank", "8765432109", "shivank@email.com"},
        {"devansh", "7654321098", "devansh@email.com"}
    };

    printf("--- Welcome to the Contact Management System ---\n");
    printf("1. Display All Contacts\n");
    printf("2. Search Contact by Name\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);
    getchar();

    if(choice == 1) {
        printf("\nName\t\tPhone Number\tEmail Address\n");
        printf("---------------------------------------------------------\n");

        for(i = 0; i < 3; i++) {
            printf("%s", c[i].name);

            if(strlen(c[i].name) < 8)
                printf("\t\t");
            else
                printf("\t");

            printf("%s\t%s\n", c[i].phone, c[i].email);
        }
    }
    else if(choice == 2) {
        int found = 0;

        printf("\nEnter name to search: ");
        fgets(search_name, sizeof(search_name), stdin);

        int len = strlen(search_name);
        if(len > 0 && search_name[len - 1] == '\n')
            search_name[len - 1] = '\0';

        for(i = 0; i < 3; i++) {
            if(strcmp(c[i].name, search_name) == 0) {
                found = 1;

                printf("\n--- Contact Found ---\n");
                printf("Name : %s\n", c[i].name);
                printf("Phone: %s\n", c[i].phone);
                printf("Email: %s\n", c[i].email);

                break;
            }
        }

        if(found == 0) {
            printf("\nError: No contact matching '%s' was found.\n", search_name);
        }
    }
    else {
        printf("\nInvalid choice selection!\n");
    }

    return 0;
}