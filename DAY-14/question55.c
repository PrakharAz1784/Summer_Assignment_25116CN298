//Write a program to Second largest element
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondLargest = arr[1];

    if (secondLargest > largest) {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    printf("The second largest element is: %d\n", secondLargest);

    return 0;
}