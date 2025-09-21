#include<stdio.h>
int main(){
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    int original=n;
    int r = 0;
    
    while(n>0){
           r=r*10;
      r=r+(n%10);
   
      n=n/10;
    }
   original=original+r;
    printf("The sum of given number and its reversed version is %d", original);
    return 0;
}

//gpt


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int original = n; // Store the original number
//     int r = 0;
    
//     while(n > 0){
//         r = r * 10 + (n % 10);
//         n = n / 10;
//     }
   
//     printf("The sum of given number and its reversed version is %d", original + r);
//     return 0;
// }