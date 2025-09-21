#include<stdio.h>
int main(){
    int a; // Declare 'a'
    if (3+2%5)
        printf("This works\n");
    a = 10; // Assign value to 'a'
    if (a)
        printf("Even this works\n");
    if (-5)
        printf("Surprisingly even this works\n");
    return 0;
}