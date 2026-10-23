#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float marks;
};

void addGrace(struct Student a[], int n, float g)
{
    int i;

    for (i = 0; i < n; i++)
        a[i].marks += g;
}

int countPass(struct Student a[], int n, float cut)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
        if (a[i].marks >= cut)
            count++;

    return count;
}

int main()
{
    struct Student a[50];
    int n, i;

    scanf("%d", &n);
    if (n < 1 || n > 50)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%29s %d %f",
              a[i].name, &a[i].roll, &a[i].marks);

    addGrace(a, n, 5);

    printf("After grace: ");
    for (i = 0; i < n; i++)
        printf("%.0f ", a[i].marks);

    printf("\nPassed = %d\n", countPass(a, n, 40));

    return 0;
}
