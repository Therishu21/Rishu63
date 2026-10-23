#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float marks;
};

int main()
{
    struct Student s[50], *p;
    int n, i, top = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n < 1 || n > 50)
        return 0;

    for (i = 0; i < n; i++)
    {
        printf("Enter name, roll and marks: ");
        scanf("%29s %d %f",
              s[i].name, &s[i].roll, &s[i].marks);
    }

    for (p = s + 1; p < s + n; p++)
    {
        if (p->marks > s[top].marks)
            top = (int)(p - s);
    }

    printf("Topper: %s\n", s[top].name);
    printf("Roll: %d\n", s[top].roll);
    printf("Marks: %.2f\n", s[top].marks);

    return 0;
}
