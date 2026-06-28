//Write a program to Create ticket booking system
#include <stdio.h>
#include <string.h>

struct TicketTier {
    int tier_id;
    char name[50];
    int available_seats;
    double price;
};

int main() {
    int i, choice, seats_to_book;

    struct TicketTier tier[3] = {
        {1, "VIP (Front Rows)", 10, 50.0},
        {2, "Premium (Middle)", 25, 30.0},
        {3, "Economy (Back Rows)", 40, 15.0}
    };

    printf("--- Welcome to the Ticket Booking System ---\n");
    printf("1. View Seat Availability & Prices\n");
    printf("2. Book Tickets\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("\nID\tSection Name\t\tAvailable Seats\tPrice per Ticket\n");
        printf("-----------------------------------------------------------------\n");

        for(i = 0; i < 3; i++) {
            printf("%d\t%s", tier[i].tier_id, tier[i].name);

            if(strlen(tier[i].name) < 16)
                printf("\t\t");
            else
                printf("\t");

            printf("%d\t\t$%.2lf\n", tier[i].available_seats, tier[i].price);
        }
    }
    else if(choice == 2) {
        int target_id;
        int found = 0;

        printf("\n1. VIP ($50.0)\n");
        printf("2. Premium ($30.0)\n");
        printf("3. Economy ($15.0)\n");
        printf("Select Section ID (1-3): ");
        scanf("%d", &target_id);

        for(i = 0; i < 3; i++) {
            if(tier[i].tier_id == target_id) {
                found = 1;

                printf("Section selected: %s\n", tier[i].name);
                printf("Available seats: %d\n", tier[i].available_seats);
                printf("Enter number of tickets to book: ");
                scanf("%d", &seats_to_book);

                if(seats_to_book > 0 && seats_to_book <= tier[i].available_seats) {
                    double total_cost = seats_to_book * tier[i].price;
                    tier[i].available_seats = tier[i].available_seats - seats_to_book;

                    printf("\n--- Booking Successful! ---\n");
                    printf("Tickets Booked: %d\n", seats_to_book);
                    printf("Total Amount Paid: $%.2lf\n", total_cost);
                    printf("Remaining seats in this section: %d\n", tier[i].available_seats);
                }
                else if(seats_to_book > tier[i].available_seats) {
                    printf("Booking Failed: Not enough seats available in this section!\n");
                }
                else {
                    printf("Error: Invalid number of tickets requested!\n");
                }

                break;
            }
        }

        if(found == 0)
            printf("Error: Invalid Section ID selected!\n");
    }
    else {
        printf("\nInvalid choice selection!\n");
    }

    return 0;
}