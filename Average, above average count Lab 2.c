#include <stdio.h>

float average(int a[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
        sum += a[i];

    return (float)sum / n;
}

int aboveAvg(int a[], int n, float avg)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
        if (a[i] > avg)
            count++;

    return count;
}

int main()
{
    int a[100], n, i;
    float avg;

    scanf("%d", &n);
    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    avg = average(a, n);

    printf("Average = %.1f, Above = %d\n",
           avg, aboveAvg(a, n, avg));

    return 0;
}
