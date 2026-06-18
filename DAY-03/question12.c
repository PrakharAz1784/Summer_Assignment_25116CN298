//Program to find LCM of two numbers
#include<stdio.h>
 int main(){
    int a,b,lcm;
    printf("Enter numbers:\n");
    scanf("%d%d", &a, &b);

    int max = (a>b)? a: b;
    for(lcm=max; lcm<=a*b; lcm++){
        if(lcm % a == 0 && lcm % b == 0)
        {
            printf("The LCM is %d\n",lcm);
            break;
        }
    }
    return 0;
 }