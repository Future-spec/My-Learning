#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter exponent: ");
    scanf("%d", &b);
    int power = 1;
    int c = b;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;

        printf("%d raised to power %d is %d\n", a, c, power);
    }

    return 0;
}
