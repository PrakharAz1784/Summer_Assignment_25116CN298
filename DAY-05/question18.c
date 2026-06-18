#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0;
    long fact;

    printf("Enter a number to check: ");
    scanf("%d", &num);
    originalNum = num;

    if (num == 0) {
        sum = 1; // 0! = 1
    } else {
        while (num > 0) {
            rem = num % 10; 
            
            fact = 1;
            for (int i = 1; i <= rem; i++) {
                fact *= i;
            }

            sum += fact;  
            num /= 10;   
        }
    }

    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
