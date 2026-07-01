// Write a program to Create inventory management system.
#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int stock;
    float price;
};

int main() {
    struct Item item[3] = {
        {101, "Laptop", 15, 900},
        {102, "Mobile", 30, 500},
        {103, "Mouse", 50, 25}
    };

    int choice, id, qty, i;

    printf("1. Display Items\n");
    printf("2. Add Stock\n");
    printf("3. Sell Item\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

    case 1:
        printf("\nID\tName\tStock\tPrice\n");
        for(i = 0; i < 3; i++)
            printf("%d\t%s\t%d\t%.2f\n",
                   item[i].id, item[i].name,
                   item[i].stock, item[i].price);
        break;

    case 2:
        printf("Enter Item ID: ");
        scanf("%d", &id);

        for(i = 0; i < 3; i++) {
            if(item[i].id == id) {
                printf("Enter quantity: ");
                scanf("%d", &qty);
                item[i].stock += qty;
                printf("New Stock = %d\n", item[i].stock);
                return 0;
            }
        }

        printf("Item Not Found");
        break;

    case 3:
        printf("Enter Item ID: ");
        scanf("%d", &id);

        for(i = 0; i < 3; i++) {
            if(item[i].id == id) {
                printf("Enter quantity: ");
                scanf("%d", &qty);

                if(qty <= item[i].stock) {
                    item[i].stock -= qty;
                    printf("Bill = %.2f\n", qty * item[i].price);
                    printf("Remaining Stock = %d\n", item[i].stock);
                }
                else
                    printf("Insufficient Stock");

                return 0;
            }
        }

        printf("Item Not Found");
        break;

    default:
        printf("Invalid Choice");
    }

    return 0;
}