// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     // 1-2+3-4+5-6+ .... n terms
//     //odd number->add
//     //even number -> subtract
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//     if(i%2!=0) sum=sum+i;
//     else sum=sum-i;
//     }
//     printf("The sum is: %d",sum);
//     return 0;
// }  
// 1-2+3-4+5-6+7=1+3+5+7-2-4-6=4


#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // 1-2+3-4+5-6+ .... n terms
    //odd number->add
    //even number -> subtract
    int sum = 0;
    if (n%2==0){
        sum= -n/2;
    }
    else{
        sum = -n/2 + n;
    }
    
    printf("The sum is: %d",sum);
    return 0;
}  