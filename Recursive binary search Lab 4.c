#include <stdio.h>

int binarySearch(int a[], int low, int high, int key)
{
    int mid;

    if (low > high)
        return -1;

    mid = low + (high - low) / 2;

    if (a[mid] == key)
        return mid;

    if (key < a[mid])
        return binarySearch(a, low, mid - 1, key);

    return binarySearch(a, mid + 1, high, key);
}

int main()
{
    int a[100], n, i, key, index;

    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    index = binarySearch(a, 0, n - 1, key);

    if (index == -1)
        printf("Not found\n");
    else
        printf("Found at index %d\n", index);

    return 0;
}
