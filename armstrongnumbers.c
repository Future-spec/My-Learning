#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, digit, sum;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; num++)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum += digit * digit * digit; // Cube of digit
            temp /= 10;
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}