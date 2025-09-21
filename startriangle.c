#include <stdio.h>
int main()
{ // Write the code inside
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // no of lines / rows -> i
    {
        for (int j = 1; j <= i; j++) // no of columns -> j
        {                            // 1 2 3 4....
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}