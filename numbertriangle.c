// #include <stdio.h>
// int main()
// { // Write the code inside
//     int n;
//     printf("Enter number of rows : ");
//     scanf("%d", &n);
//     // n=4
//     for (int i = 1; i <= n; i++)     // no of lines / rows -> i                                        // i=2
//     {                                // j=1
//         for (int j = 1; j <= i; j++) // no of columns -> j                        // if i=1,j=4
//         {                            // 1 2 3 4....
//             printf("%d ", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// ULTA NUMBER TRIANGLE

#include <stdio.h>
int main()
{ // Write the code inside
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    // n=4
    for (int i = 1; i <= n; i++)             // no of lines / rows -> i                                        // i=2
    {                                        // j=1
        for (int j = 1; j <= n + 1 - i; j++) // no of columns -> j                        // if i=1,j=4
        {                                    // 1 2 3 4....
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}