#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Age of Ram:");
    scanf("%d", &a);
    printf("Enter Age of Shyam:");
    scanf("%d", &b);
    printf("Enter Age of Ajay:");
    scanf("%d", &c);
    if(a<b){
        if(a<c)
            printf("Ram is the youngest with age %d", a);
        else // c<a -> b<a<c
            printf("Ajay is the youngest with age %d", c);
    }
    else { // a<b -> b ab sabse chhota nahi hai
        if(b<c){
            printf("Shyam is the youngest with age %d", b);
        }  
        else { // c<b -> a<b<c
            printf("Ajay is the youngest with age %d", c);
        }
    }
    return 0;
}