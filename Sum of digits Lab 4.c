#include <stdio.h>

int sumDigits(int n)
{
    if (n < 0)
        n = -n;

    if (n < 10)
        return n;

    return n % 10 + sumDigits(n / 10);
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumDigits(n));

    return 0;
}
