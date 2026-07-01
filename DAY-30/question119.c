// Write a program to Create mini employee management system.
#include <stdio.h>

int main() {
    int id[3] = {101, 102, 103};
    char name[3][20] = {"Alice", "Robert", "Charlie"};
    float salary[3] = {4500.5, 5200.0, 3800.25};

    int choice, empid, i;

    printf("1. Display Employees\n");
    printf("2. Search Employee\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

    case 1:
        printf("\nID\tName\tSalary\n");
        for(i = 0; i < 3; i++) {
            printf("%d\t%s\t%.2f\n", id[i], name[i], salary[i]);
        }
        break;

    case 2:
        printf("Enter Employee ID: ");
        scanf("%d", &empid);

        for(i = 0; i < 3; i++) {
            if(id[i] == empid) {
                printf("\nID     : %d", id[i]);
                printf("\nName   : %s", name[i]);
                printf("\nSalary : %.2f\n", salary[i]);
                return 0;
            }
        }

        printf("Employee Not Found");
        break;

    default:
        printf("Invalid Choice");
    }

    return 0;
}