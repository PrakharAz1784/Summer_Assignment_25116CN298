//Program to print armstrong numbers in range
#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, temp, remainder, digits;
    double sum;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        temp = i;
        digits = 0;
        sum = 0.0;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = i;

        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }
        if ((int)(sum + 0.5) == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
