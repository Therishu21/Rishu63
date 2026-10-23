#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float marks;
};

void swapStudents(struct Student *a, struct Student *b)
{
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void display(struct Student s)
{
    printf("%s %d %.1f\n", s.name, s.roll, s.marks);
}

int main()
{
    struct Student a = {"Asha", 12, 78.5};
    struct Student b = {"Ravi", 15, 88.0};

    printf("Before swap:\n");
    display(a);
    display(b);

    swapStudents(&a, &b);

    printf("After swap:\n");
    display(a);
    display(b);

    return 0;
}
