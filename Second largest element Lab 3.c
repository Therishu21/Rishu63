#include <stdio.h>
#include <limits.h>

int main()
{
    int a[100], n, i;
    int largest = INT_MIN;
    int second = INT_MIN;

    scanf("%d", &n);
    if (n < 2 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > second)
        {
            second = a[i];
        }
    }

    if (second == INT_MIN)
        printf("No distinct second largest\n");
    else
        printf("Second largest = %d\n", second);

    return 0;
}
