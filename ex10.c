// Write a C program to initialize structure members
// during declaration and display them.

#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student s = {239,"Poovarasan",95.5};

    printf("Student Details\n");
    printf("Roll Number : %d\n",s.roll);
    printf("Name        : %s\n",s.name);
    printf("Marks       : %.2f\n",s.marks);

    return 0;
}
