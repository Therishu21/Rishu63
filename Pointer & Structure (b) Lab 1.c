#include <stdio.h>

struct Student
{
    char name[30];
    int roll;
    float marks;
};

void update(struct Student *s, float m)
{
    s->marks = m;
}

int main()
{
    struct Student s = {"Asha", 7, 72};

    printf("Before update: %.2f\n", s.marks);

    update(&s, 91);

    printf("After update: %.2f\n", s.marks);

    return 0;
}
