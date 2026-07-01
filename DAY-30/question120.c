// Write a program to Develop complete mini project using arrays, strings and functions.
#include <stdio.h>
#include <string.h>

#define MAX 10

void display(char name[][20], char phone[][15], int n);
void add(char name[][20], char phone[][15], int *n);
void search(char name[][20], char phone[][15], int n);

int main() {
    char name[MAX][20] = {"Shivank", "Mohit", "Devansh"};
    char phone[MAX][15] = {"9876543210", "8765432109", "7654321098"};

    int n = 3, choice;

    do {
        printf("\n1.Display Contacts");
        printf("\n2.Add Contact");
        printf("\n3.Search Contact");
        printf("\n4.Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            display(name, phone, n);
            break;

        case 2:
            add(name, phone, &n);
            break;

        case 3:
            search(name, phone, n);
            break;

        case 4:
            printf("Thank You!");
            break;

        default:
            printf("Invalid Choice");
        }

    } while(choice != 4);

    return 0;
}

void display(char name[][20], char phone[][15], int n) {
    int i;

    printf("\nName\t\tPhone\n");
    for(i = 0; i < n; i++)
        printf("%s\t%s\n", name[i], phone[i]);
}

void add(char name[][20], char phone[][15], int *n) {

    printf("Enter Name: ");
    scanf("%s", name[*n]);

    printf("Enter Phone: ");
    scanf("%s", phone[*n]);

    (*n)++;

    printf("Contact Added\n");
}

void search(char name[][20], char phone[][15], int n) {
    char s[20];
    int i;

    printf("Enter Name: ");
    scanf("%s", s);

    for(i = 0; i < n; i++) {
        if(strcmp(name[i], s) == 0) {
            printf("Phone: %s\n", phone[i]);
            return;
        }
    }

    printf("Contact Not Found\n");
}