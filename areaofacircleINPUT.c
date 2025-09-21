#include<stdio.h>
int main(){
    int radius; // for decimal value, use float or use int so code works 
    printf("Enter Radius: ");
    scanf("%f",&radius);
    float pi=3.1415;
    float area=pi*radius*radius;
    printf("The area of circle is: %f",area);
    return 0;
}