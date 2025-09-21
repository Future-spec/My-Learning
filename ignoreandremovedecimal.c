#include<stdio.h>
int main(){
    float x;
    scanf("Enter a decimal number: %f",&x);
    int y=x;
   // printf("%d\n",y);
    float z=x-y;
    printf("The required decimal number is: %f",&z);
    return 0;
}