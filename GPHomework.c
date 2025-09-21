#include<stdio.h>
int main(){
   int n; // itni baar loop chalega
    printf("Enter a number: ");
    scanf("%d", &n);
    // 3 12 48  .... upto n number of terms
    
    int a=3;
    for (int i=1;i<=n;i=i+1){
        
            printf("%d ", a);
        a=a*4;
    }
    return 0;
}