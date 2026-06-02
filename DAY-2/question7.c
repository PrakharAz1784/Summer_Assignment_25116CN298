//Program to find product of digits
#include<stdio.h>

int main(){
    int n,pro=1,rem;
    int temp;

    printf("Enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem=n%10;
        pro=pro*rem;
        n=n/10;
    }
    printf("Product of digits %d is %d\n",temp,pro);
    return 0;
}