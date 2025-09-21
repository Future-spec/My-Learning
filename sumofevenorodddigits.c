//even

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int sum = 0;
//     int lastdigit = 0;
//     while(n != 0){
//         lastdigit = n % 10;
//         if(lastdigit % 2 == 0){ // check if digit is even
//             sum = sum + lastdigit;
//         }
//         n = n / 10;
//     }
//     printf("The sum of even digits is %d", sum);
//     return 0;
// }

//odd

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    int lastdigit = 0;
    while(n != 0){
        lastdigit = n % 10;
        if(lastdigit % 2 != 0){ // check if digit is odd
            sum = sum + lastdigit;
        }
        n = n / 10;
    }
    printf("The sum of odd digits is %d", sum);
    return 0;
}