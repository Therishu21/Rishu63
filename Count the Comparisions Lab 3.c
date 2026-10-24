#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int linear = 0, binary = 0;
    int low, high, mid;

    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        linear++;

        if (a[i] == key)
            break;
    }

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        binary++;

        if (a[mid] == key)
            break;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Linear = %d, Binary = %d\n",
           linear, binary);

    return 0;
}
