#include <stdio.h>

int comparisons = 0;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int medianIndex(int a[], int low, int high)
{
    int mid = low + (high - low) / 2;

    if (a[low] > a[mid])
        swap(&a[low], &a[mid]);

    if (a[low] > a[high])
        swap(&a[low], &a[high]);

    if (a[mid] > a[high])
        swap(&a[mid], &a[high]);

    return mid;
}

int partition(int a[], int low, int high)
{
    int pivotIndex, pivot, i, j;

    pivotIndex = medianIndex(a, low, high);
    swap(&a[pivotIndex], &a[high]);

    pivot = a[high];
    i = low - 1;

    for (j = low; j < high; j++)
    {
        comparisons++;

        if (a[j] <= pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i + 1], &a[high]);

    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    int p;

    if (low < high)
    {
        p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    quickSort(a, 0, n - 1);

    printf("Sorted: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nComparisons: %d\n", comparisons);

    return 0;
}
