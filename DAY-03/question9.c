//Program to check whether a number is prime 
#include<stdio.h>

int main(){
    int i,j,n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n<=1){
        printf("%d is not a prime number\n",n);
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0){
            count++;
            break;
        }
    }
        if(count==0){
            printf("%d is prime number",n);
        }
        else{
            printf("%d is not prime number",n);
        }
    
    return 0;
}