#include <stdio.h>

void reverse(int a[], int n)
{
    int left = 0, right = n - 1, temp;

    while (left < right)
    {
        temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    int a[100], n, i;

    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverse(a, n);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
