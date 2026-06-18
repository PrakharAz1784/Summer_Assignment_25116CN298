//Program to find sum of digits of a number
#include<stdio.h>
int main(){
    int n,sum=0,rem;
    int temp;

    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        rem=n/10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum of digits %d is %d\n",temp,sum);

    return 0;
}