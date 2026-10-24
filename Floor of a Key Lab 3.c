#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low = 0, high, mid, ans = -1;

    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (a[mid] <= key)
        {
            ans = a[mid];
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    if (ans == -1)
        printf("Floor = none\n");
    else
        printf("Floor = %d\n", ans);

    return 0;
}
