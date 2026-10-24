#include <stdio.h>

void reverse(int a[], int left, int right)
{
    int temp;

    if (left >= right)
        return;

    temp = a[left];
    a[left] = a[right];
    a[right] = temp;

    reverse(a, left + 1, right - 1);
}

int main()
{
    int a[100], n, i;

    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverse(a, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
