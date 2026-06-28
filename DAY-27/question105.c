//Write a program to Create student record management system
#include <stdio.h>

struct Student {
    int roll_no;
    char name[100];
    float marks;
};

int main() {
    int i;
    int total_students = 3;
    struct Student s[3];

    printf("--- Enter Student Records ---\n\n");

    for(i = 0; i < total_students; i++) {
        printf("Recording Data for Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        getchar();

        printf("Enter Full Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        int len = 0;
        while(s[i].name[len] != '\0') {
            len++;
        }
        if(len > 0 && s[i].name[len - 1] == '\n') {
            s[i].name[len - 1] = '\0';
        }

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        getchar();

        printf("\n");
    }

    printf("--- Displaying All Student Records ---\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("-------------------------------------\n");

    for(i = 0; i < total_students; i++) {
        printf("%d\t%s\t\t%.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }

    return 0;
}