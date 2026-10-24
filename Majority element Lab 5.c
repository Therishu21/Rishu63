#include <stdio.h>

void merge(int a[], int temp[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right)
    {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= right)
        temp[k++] = a[j++];

    for (i = left; i <= right; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int temp[], int left, int right)
{
    int mid;

    if (left >= right)
        return;

    mid = left + (right - left) / 2;

    mergeSort(a, temp, left, mid);
    mergeSort(a, temp, mid + 1, right);

    merge(a, temp, left, mid, right);
}

int main()
{
    int a[100], temp[100];
    int n, i, count, candidate, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergeSort(a, temp, 0, n - 1);

    i = 0;

    while (i < n)
    {
        candidate = a[i];
        count = 0;

        while (i < n && a[i] == candidate)
        {
            count++;
            i++;
        }

        if (count > n / 2)
        {
            printf("Majority = %d\n", candidate);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("No majority\n");

    return 0;
}
