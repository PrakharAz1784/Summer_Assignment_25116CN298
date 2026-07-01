//Write a program to Create menu-driven array operations system.
#include <stdio.h>

int main() {
    int i, choice, pos, value, found;
    int n = 5;
    int max_size = 10;
    int a[10] = {10, 20, 30, 40, 50};

    printf("--- Array Operations Menu ---\n");
    printf("1. Display Array Elements\n");
    printf("2. Insert Element at Position\n");
    printf("3. Delete Element from Position\n");
    printf("4. Search Element by Value\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("\nArray elements: ");
        for(i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\nCurrent total count: %d\n", n);
    }
    else if(choice == 2) {
        if(n >= max_size) {
            printf("\nError: Array is full! Cannot insert.\n");
        }
        else {
            printf("\nEnter position to insert (1 to %d): ", n + 1);
            scanf("%d", &pos);

            int index = pos - 1;

            if(index >= 0 && index <= n) {
                printf("Enter value to insert: ");
                scanf("%d", &value);

                for(i = n - 1; i >= index; i--) {
                    a[i + 1] = a[i];
                }

                a[index] = value;
                n++;

                printf("Element inserted successfully!\nNew array: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
            else {
                printf("Invalid position target!\n");
            }
        }
    }
    else if(choice == 3) {
        if(n <= 0) {
            printf("\nError: Array is empty! Nothing to delete.\n");
        }
        else {
            printf("\nEnter position to delete (1 to %d): ", n);
            scanf("%d", &pos);

            int index = pos - 1;

            if(index >= 0 && index < n) {
                for(i = index; i < n - 1; i++) {
                    a[i] = a[i + 1];
                }

                n--;

                printf("Element deleted successfully!\nNew array: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
            else {
                printf("Invalid position target!\n");
            }
        }
    }
    else if(choice == 4) {
        printf("\nEnter value to search: ");
        scanf("%d", &value);

        found = 0;

        for(i = 0; i < n; i++) {
            if(a[i] == value) {
                printf("Value %d found at position: %d\n", value, i + 1);
                found = 1;
                break;
            }
        }

        if(found == 0) {
            printf("Value not found inside the array.\n");
        }
    }
    else {
        printf("\nInvalid choice selection!\n");
    }

    return 0;
}