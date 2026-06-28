//Write a program to Create salary management system
#include <stdio.h>

struct SalaryRecord {
    int id;
    char name[100];
    double base_pay;
    double hra;
    double da;
    double gross_salary;
};

int main() {
    int i;
    int total_records = 3;
    struct SalaryRecord emp[3];

    printf("--- Enter Salary Payroll Details ---\n\n");

    for(i = 0; i < total_records; i++) {
        printf("Payroll for Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);
        getchar();

        printf("Enter Full Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);

        int len = 0;
        while(emp[i].name[len] != '\0') {
            len++;
        }
        if(len > 0 && emp[i].name[len - 1] == '\n') {
            emp[i].name[len - 1] = '\0';
        }

        printf("Enter Base Monthly Pay: $");
        scanf("%lf", &emp[i].base_pay);

        printf("Enter House Rent Allowance (HRA): $");
        scanf("%lf", &emp[i].hra);

        printf("Enter Dearness Allowance (DA): $");
        scanf("%lf", &emp[i].da);

        emp[i].gross_salary = emp[i].base_pay + emp[i].hra + emp[i].da;

        getchar();
        printf("\n");
    }

    printf("--- Payroll Ledger Statement ---\n");
    printf("ID\tName\t\tBase Pay\tAllowances\tGross Salary\n");
    printf("---------------------------------------------------------------\n");

    for(i = 0; i < total_records; i++) {
        double total_allowances = emp[i].hra + emp[i].da;

        printf("%d\t%s\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",
               emp[i].id,
               emp[i].name,
               emp[i].base_pay,
               total_allowances,
               emp[i].gross_salary);
    }

    return 0;
}