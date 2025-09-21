#include<stdio.h>
int main(){
    int x; //dabba ban gaya
    printf("Enter a number:");
    scanf("%d",&x);//dabbe mei value daal di
    if (x%5==0)//even
    {
        printf("Divisible by 5");
    }
   /* if (x%2!=0)//odd
    {
     printf("Odd Number");
    }*/
    else{
        printf("Not Divisible by 5");
    }
    return 0;
}