#include<stdio.h>
int main(){
    int x; //dabba ban gaya
    printf("Enter a number:");
    scanf("%d",&x);//dabbe mei value daal di
    if (x%2==0)//even
    {
        printf("Even Number");
    }
   /* if (x%2!=0)//odd
    {
     printf("Odd Number");
    }*/
    else{
        printf("Odd Number");
    }
    return 0;
}