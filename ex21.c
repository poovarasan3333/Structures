// Write a C program to compare the marks of two students
// using structures and display the topper.

#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student s1, s2;

    printf("Enter First Student Details\n");
    printf("Roll Number: ");
    scanf("%d",&s1.roll);
    printf("Name: ");
    scanf(" %[^\n]",s1.name);
    printf("Marks: ");
    scanf("%f",&s1.marks);

    printf("\nEnter Second Student Details\n");
    printf("Roll Number: ");
    scanf("%d",&s2.roll);
    printf("Name: ");
    scanf(" %[^\n]",s2.name);
    printf("Marks: ");
    scanf("%f",&s2.marks);

    if(s1.marks > s2.marks)
        printf("\nTopper: %s", s1.name);
    else if(s2.marks > s1.marks)
        printf("\nTopper: %s", s2.name);
    else
        printf("\nBoth students scored the same marks.");
printf("\n");
    return 0;
}
