//Write a program to Create employee management system.
#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    double salary;
};

int main() {
    int i;
    int total_employees = 3;
    struct Employee e[3];

    printf("--- Enter Employee Records ---\n\n");

    for(i = 0; i < total_employees; i++) {
        printf("Recording Data for Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);
        getchar();

        printf("Enter Full Name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);

        int len = 0;
        while(e[i].name[len] != '\0') {
            len++;
        }
        if(len > 0 && e[i].name[len - 1] == '\n') {
            e[i].name[len - 1] = '\0';
        }

        printf("Enter Salary: $");
        scanf("%lf", &e[i].salary);
        getchar();

        printf("\n");
    }

    printf("--- Displaying All Employee Records ---\n");
    printf("ID\tName\t\tSalary\n");
    printf("-------------------------------------\n");

    for(i = 0; i < total_employees; i++) {
        printf("%d\t%s\t\t$%.2lf\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}