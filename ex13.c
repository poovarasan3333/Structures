// Write a C program to calculate the total marks of a
// student using a function that accepts a structure.

#include <stdio.h>

struct Student
{
    int m1,m2,m3;
};

int totalMarks(struct Student s)
{
    return s.m1+s.m2+s.m3;
}

int main()
{
    struct Student s;

    printf("Enter Three Marks: ");
    scanf("%d%d%d",&s.m1,&s.m2,&s.m3);

    printf("Total Marks = %d\n",totalMarks(s));

    return 0;
}
