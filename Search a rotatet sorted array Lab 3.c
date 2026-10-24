#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low = 0, high, mid, index = -1;

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

        if (a[mid] == key)
        {
            index = mid;
            break;
        }

        if (a[low] <= a[mid])
        {
            if (key >= a[low] && key < a[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (key > a[mid] && key <= a[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    if (index == -1)
        printf("Not found\n");
    else
        printf("Found at index %d\n", index);

    return 0;
}
