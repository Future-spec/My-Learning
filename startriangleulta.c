// #include <stdio.h>
// int main()
// { // Write the code inside
//     int n;
//     printf("Enter number of rows : ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) // no of lines / rows -> i
//     {
//         for (int j = 1; j <= n + 1 - i; j++) // no of columns -> j                        // if i=1,j=4
//         {                                    // 1 2 3 4....
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// ANOTHER WAY

#include <stdio.h>
int main()
{ // Write the code inside
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++) // no of lines / rows -> i
    {

        for (int j = 1; j <= a; j++) // no of columns -> j                        // if i=1,j=4
        {                            // 1 2 3 4....                                // j-> 1 to a
            printf("* ");
        }
        a--;
        printf("\n");
    }

    return 0;
}