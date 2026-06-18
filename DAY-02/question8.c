//program to check if a number is palindrome
#include<stdio.h>
 int main(){
    int n,rem, original,reverse=0;
    printf("Enter a number:");
    scanf("%d",&n);

    original=n;

    while(n != 0){
        rem=n%10;
        reverse=(reverse*10)+rem;
        n=n/10;
    }
    if(original==reverse){
        printf("%d is a palindrome number.\n",original);
    }else{
        printf("%d is not a palindrome number.\n",original);
    }
    return 0;
 }