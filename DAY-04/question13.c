//Program to generate fibonacci series
#include<stdio.h>

int main(){
    int i,n;
    int a=0, b=1, nextTerm;

    printf("Enter the number of terms:");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for(i=1; i <= n; i++){
        printf("%d", a);

        if(i < n){
            printf(", ");
        }
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    printf("\n");
    return 0;
}