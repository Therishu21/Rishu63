#include <stdio.h>

long long mergeCount(int a[], int temp[],
                     int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;
    long long count = 0;

    while (i <= mid && j <= right)
    {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
        {
            temp[k++] = a[j++];
            count += mid - i + 1;
        }
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= right)
        temp[k++] = a[j++];

    for (i = left; i <= right; i++)
        a[i] = temp[i];

    return count;
}

long long sortCount(int a[], int temp[],
                    int left, int right)
{
    int mid;
    long long count = 0;

    if (left >= right)
        return 0;

    mid = left + (right - left) / 2;

    count += sortCount(a, temp, left, mid);
    count += sortCount(a, temp, mid + 1, right);
    count += mergeCount(a, temp, left, mid, right);

    return count;
}

int main()
{
    int a[100], temp[100], n, i;
    long long inversions;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    inversions = sortCount(a, temp, 0, n - 1);

    printf("Inversions = %lld\n", inversions);

    return 0;
}
