//Write a program to Create ATM simulation.
#include <stdio.h>

int main() {
    int choice;
    double balance = 5000.0;
    double amount;

    while(1) {
        printf("--- Welcome to the ATM ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("\nYour current balance is: $%.2lf\n", balance);
        }
        else if(choice == 2) {
            printf("\nEnter amount to deposit: $");
            scanf("%lf", &amount);

            if(amount > 0) {
                balance = balance + amount;
                printf("Successfully deposited! New balance: $%.2lf\n", balance);
            }
            else {
                printf("Invalid deposit amount!\n");
            }
        }
        else if(choice == 3) {
            printf("\nEnter amount to withdraw: $");
            scanf("%lf", &amount);

            if(amount > 0 && amount <= balance) {
                balance = balance - amount;
                printf("Successfully withdrawn! New balance: $%.2lf\n", balance);
            }
            else if(amount > balance) {
                printf("Transaction failed! Insufficient balance.\n");
            }
            else {
                printf("Invalid withdrawal amount!\n");
            }
        }
        else if(choice == 4) {
            printf("\nThank you for using our ATM. Goodbye!\n");
            break;
        }
        else {
            printf("\nInvalid choice selection!\n");
        }
    }

    return 0;
}