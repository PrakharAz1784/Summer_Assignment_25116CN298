#include<stdio.h>

int main()
{
    int n,sum;
    printf("Enter a positive number:");
    scanf("%d",&n);
    if(n<1){
        printf("Enter a natural number\n");
    }else{
        sum=n*(n+1)/2;
        printf("The sum of first %d natural number is:%d\n",n,sum);
    }
    return 0;
}
