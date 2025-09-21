
// #include <stdio.h>
// int main()
// { // Write the code inside
//     int n;
//     printf("Enter number of rows : ");
//     scanf("%d", &n);
//     // n=4 -> 1 3 5 7
//     for (int i = 1; i <= 2 * n - 1; i = i + 2)
//         printf("%d ", i);
//     return 0;
// }

#include <stdio.h>
int main()
{ // Write the code inside
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);

    // n=4 -> 1 3 5 7
    for (int i = 1; i <= n; i = i + 1)
    {
        int a = 1;
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}