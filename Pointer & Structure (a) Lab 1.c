#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float marks;
};

int main()
{
    struct Student s = {"Ravi", 12, 86.5};
    struct Student *p = &s;

    printf("Name: %s\n", p->name);
    printf("Roll: %d\n", p->roll);
    printf("Marks: %.2f\n", p->marks);

    return 0;
}
