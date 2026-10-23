#include <stdio.h>

int main()
{
    int a[100], n, i, largest;
    int *p = a;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", p + i);

    largest = *p;

    printf("Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));

        if (*(p + i) > largest)
            largest = *(p + i);
    }

    printf("\nLargest = %d\n", largest);

    return 0;
}
