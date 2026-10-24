#include <stdio.h>

void printSet(int a[], int n, int index,
              int chosen[], int count, int *total)
{
    int i;

    if (index == n)
    {
        printf("{");

        for (i = 0; i < count; i++)
        {
            if (i > 0)
                printf(" ");

            printf("%d", chosen[i]);
        }

        printf("}\n");
        (*total)++;

        return;
    }

    /* Exclude the current element */
    printSet(a, n, index + 1, chosen, count, total);

    /* Include the current element */
    chosen[count] = a[index];

    printSet(a, n, index + 1, chosen, count + 1, total);
}

int main()
{
    int a[20], chosen[20];
    int n, i, total = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
        return 0;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printSet(a, n, 0, chosen, 0, &total);

    printf("Count = %d\n", total);

    return 0;
}
