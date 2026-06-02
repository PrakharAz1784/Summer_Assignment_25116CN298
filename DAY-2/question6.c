//Program to reverse a number
#include<stdio.h>
int main(){
    int n,rem,reverse=0;

    printf("Enter a number:");
    scanf("%d",&n);
    
    while(n != 0){
        rem=n%10;
        reverse=(reverse*10)+rem;
        n/=10;
    }

    printf("Reversed number =%d\n",reverse);

    return 0;
}