//Write a program to Create menu-driven calculator
#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("--- Simple Calculator Menu ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 4) {
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        if(choice == 1) {
            result = num1 + num2;
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
        }
        else if(choice == 2) {
            result = num1 - num2;
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
        }
        else if(choice == 3) {
            result = num1 * num2;
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
        }
        else if(choice == 4) {
            if(num2 != 0) {
                result = num1 / num2;
                printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            else {
                printf("\nError: Division by zero is not allowed!\n");
            }
        }
    }
    else {
        printf("\nInvalid choice selection!\n");
    }

    return 0;
}