// Write a C program to read student details using a user-defined
// function and display them using another function.

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void readStudent(struct Student *s)
{
    printf("Enter Roll Number: ");
    scanf("%d",&s->roll);

    printf("Enter Name: ");
    scanf(" %[^\n]",s->name);

    printf("Enter Marks: ");
    scanf("%f",&s->marks);
}

void displayStudent(struct Student s)
{
    printf("\nStudent Details\n");
    printf("Roll Number : %d\n",s.roll);
    printf("Name        : %s\n",s.name);
    printf("Marks       : %.2f\n",s.marks);
}

int main()
{
    struct Student s;

    readStudent(&s);
    displayStudent(s);

    return 0;
}
