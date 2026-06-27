//Write a program to Create voting eligibility system
#include <stdio.h>

int main() {
    int age, years_left;

    printf("enter your age : ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("status : eligible to vote!\n");
    }
    else {
        years_left = 18 - age;
        printf("status : not eligible to vote.\n");
        printf("you need to wait %d more years to vote.\n", years_left);
    }

    return 0;
}
