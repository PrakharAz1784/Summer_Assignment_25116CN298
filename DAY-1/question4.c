#include<stdio.h>
 int main(){
    int n,num,count=0;
    printf("Enter a number");
    scanf("%d",&num);
    
    n=num;
    while(num>0){
        num=num/10;
        count++;
    }
    printf("%d digits",count);
    printf("in a %d number",n);
    return 0;
 }