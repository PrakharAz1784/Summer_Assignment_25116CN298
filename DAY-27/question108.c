//Write a program to Create marksheet generation system.
#include <stdio.h>
#include <string.h>

struct Marksheet {
    int roll_no;
    char name[100];
    int maths;
    int science;
    int english;
    int total;
    float percentage;
    char grade[20];
};

int main() {
    int i;
    int total_students = 1;
    struct Marksheet s[1];

    printf("--- Student Marksheet Entry System ---\n\n");

    for(i = 0; i < total_students; i++) {
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        getchar();

        printf("Enter Full Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        int len = strlen(s[i].name);
        if(len > 0 && s[i].name[len - 1] == '\n') {
            s[i].name[len - 1] = '\0';
        }

        printf("Enter Marks for Maths (out of 100): ");
        scanf("%d", &s[i].maths);

        printf("Enter Marks for Science (out of 100): ");
        scanf("%d", &s[i].science);

        printf("Enter Marks for English (out of 100): ");
        scanf("%d", &s[i].english);

        s[i].total = s[i].maths + s[i].science + s[i].english;
        s[i].percentage = (s[i].total / 300.0) * 100;

        if(s[i].percentage >= 80) {
            strcpy(s[i].grade, "A (Excellent)");
        }
        else if(s[i].percentage >= 60) {
            strcpy(s[i].grade, "B (Good)");
        }
        else if(s[i].percentage >= 40) {
            strcpy(s[i].grade, "C (Pass)");
        }
        else {
            strcpy(s[i].grade, "F (Fail)");
        }
    }

    printf("\n=========================================\n");
    printf("           OFFICIAL MARKSHEET\n");
    printf("=========================================\n");
    printf("Roll Number : %d\n", s[0].roll_no);
    printf("Student Name: %s\n", s[0].name);
    printf("-----------------------------------------\n");
    printf("SUBJECT          MAX MARKS    OBTAINED\n");
    printf("-----------------------------------------\n");
    printf("Maths            100          %d\n", s[0].maths);
    printf("Science          100          %d\n", s[0].science);
    printf("English          100          %d\n", s[0].english);
    printf("-----------------------------------------\n");
    printf("TOTAL MARKS:     300          %d\n", s[0].total);
    printf("PERCENTAGE:                   %.2f%%\n", s[0].percentage);
    printf("FINAL GRADE:                  %s\n", s[0].grade);
    printf("=========================================\n");

    return 0;
}




