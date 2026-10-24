#include <stdio.h>

int countKey(int a[], int n, int key)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
        if (a[i] == key)
            count++;

    return count;
}

int main()
{
    int a[100], n, i, key;

    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    printf("%d appears %d times\n",
           key, countKey(a, n, key));

    return 0;
}
