#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    //ternary operator
    //expression 1? expression 2 : expression 3
    n%2==0 ? printf("The number is even") : printf("The number is odd");
    // if(n%2==0)
    // printf("The number is even");
    // else
    // printf("The number is odd");
    return 0;
}