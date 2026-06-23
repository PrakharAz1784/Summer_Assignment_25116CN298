//Write a program to Binary search.
#include <stdio.h>

int main() {
    int i, n, target;

    printf("enter no of elements of array : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements in SORTED order:\n", n);
    for(i = 0; i < n; i++) {
        printf("enter element %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search for : ");
    scanf("%d", &target);

    int low = 0;
    int high = n - 1;
    int mid;
    int found_index = -1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == target) {
            found_index = mid;
            break;
        } else if(a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(found_index != -1) {
        printf("Element found at position : %d\n", found_index + 1);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}