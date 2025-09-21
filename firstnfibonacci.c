// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int a=1;
//     int b=1;
//     int sum=1;
//     for(int i=1;i<=n-2;i++){
//     sum=a+b;
//     a=b;
//     b=sum;
//     printf("The fibonacci of %d is %d\n",n,sum);
//     }
//     return 0;
// }

// gpt

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int a = 1;
//     int b = 1;
//     printf("%d ", a);
//     if(n > 1) printf("The fibonacci of %d is %d\n", n, b);
//     for(int i = 3; i <= n; i++) {
//         int sum = a + b;
//         printf("%d ", sum);
//         a = b;
//         b = sum;
//     }
//     printf("\n");
//     return 0;
// }

// chatgpt

#include <stdio.h>

int main()
{
    int n, i;
    long long first = 1, second = 1, next;

    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("The 1st Fibonacci number is %lld\n", first);
        }
        else if (i == 2)
        {
            printf("The 2nd Fibonacci number is %lld\n", second);
        }
        else
        {
            next = first + second;
            first = second;
            second = next;

            // Suffix logic for 3rd, 4th, etc.
            printf("The %d%s Fibonacci number is %lld\n", i,
                   (i % 10 == 1 && i % 100 != 11) ? "st" : (i % 10 == 2 && i % 100 != 12) ? "nd"
                                                       : (i % 10 == 3 && i % 100 != 13)   ? "rd"
                                                                                          : "th",
                   next);
        }
    }

    return 0;
}
