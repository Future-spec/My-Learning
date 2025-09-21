#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter A Age:");
    scanf("%d", &a);
    printf("Enter B Age:");
    scanf("%d", &b);
    printf("Enter C Age:");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        printf("A is the Youngest");
    }
    if (b < a && b < c)
    {
        printf("B is the Youngest");
    }
    if (c < a && c < b)
    {
        printf("C is the Youngest");
    }
    return 0;
}