//Write a program to Create bank account system
#include <stdio.h>
#include <string.h>

struct Account {
    int account_no;
    char holder_name[50];
    double balance;
};

int main() {
    int i, choice, search_acc;
    double amount;
    int total_accounts = 3;

    struct Account acc[3] = {
        {1001, "prakhar", 5000.0},
        {1002, "devansh", 1200.50},
        {1003, "mohit", 750.25}
    };

    printf("--- Welcome to the Bank Account System ---\n");
    printf("1. Display All Accounts\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("\nAcc No\tName\t\t\tBalance\n");
        printf("------------------------------------------\n");

        for(i = 0; i < total_accounts; i++) {
            printf("%d\t%s", acc[i].account_no, acc[i].holder_name);

            if(strlen(acc[i].holder_name) < 8)
                printf("\t\t\t");
            else if(strlen(acc[i].holder_name) < 16)
                printf("\t\t");
            else
                printf("\t");

            printf("$%.2lf\n", acc[i].balance);
        }
    }
    else if(choice == 2) {
        int found = 0;

        printf("\nEnter Account Number: ");
        scanf("%d", &search_acc);

        for(i = 0; i < total_accounts; i++) {
            if(acc[i].account_no == search_acc) {
                found = 1;

                printf("Account Holder: %s\n", acc[i].holder_name);
                printf("Enter amount to deposit: $");
                scanf("%lf", &amount);

                if(amount > 0) {
                    acc[i].balance = acc[i].balance + amount;
                    printf("Successfully deposited! New Balance: $%.2lf\n", acc[i].balance);
                }
                else {
                    printf("Error: Invalid deposit amount!\n");
                }
                break;
            }
        }

        if(found == 0)
            printf("Error: Account number not found!\n");
    }
    else if(choice == 3) {
        int found = 0;

        printf("\nEnter Account Number: ");
        scanf("%d", &search_acc);

        for(i = 0; i < total_accounts; i++) {
            if(acc[i].account_no == search_acc) {
                found = 1;

                printf("Account Holder: %s\n", acc[i].holder_name);
                printf("Enter amount to withdraw: $");
                scanf("%lf", &amount);

                if(amount > 0 && amount <= acc[i].balance) {
                    acc[i].balance = acc[i].balance - amount;
                    printf("Successfully withdrawn! New Balance: $%.2lf\n", acc[i].balance);
                }
                else if(amount > acc[i].balance) {
                    printf("Transaction Failed: Insufficient balance!\n");
                }
                else {
                    printf("Error: Invalid withdrawal amount!\n");
                }
                break;
            }
        }

        if(found == 0)
            printf("Error: Account number not found!\n");
    }
    else {
        printf("\nInvalid choice selection!\n");
    }

    return 0;
}
