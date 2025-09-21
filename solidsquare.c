#include <stdio.h>
int main()
{ // Write the code inside
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);

    //**********... upto n no of stars
    for (int i = 1; i <= n; i++)
    {                                // outer loop -> no of lines
        for (int i = 1; i <= n; i++) // inner loop -> no of stars in each line
        {
            printf("*");
        }
        printf("\n");
        // har line ke baad ek enter marne ke liye hai
    }

    return 0;
}