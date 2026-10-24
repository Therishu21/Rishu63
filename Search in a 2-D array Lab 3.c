#include <stdio.h>

int main()
{
    int a[20][20], rows, cols;
    int i, j, key, found = 0;

    scanf("%d %d", &rows, &cols);

    if (rows < 1 || rows > 20 ||
        cols < 1 || cols > 20)
        return 0;

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    scanf("%d", &key);

    for (i = 0; i < rows && !found; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (a[i][j] == key)
            {
                printf("Found at (%d, %d)\n", i, j);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("Not found\n");

    return 0;
}
