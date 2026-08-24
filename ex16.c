// Write a C program to store details of 5 students
// using an array of structures and display them.

#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student s[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Enter Roll Number: ");
        scanf("%d",&s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]",s[i].name);

        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
    }

    printf("\nStudent Details\n");

    for(i=0;i<5;i++)
    {
        printf("%d %s %.2f\n",
        s[i].roll,s[i].name,s[i].marks);
    }

    return 0;
}
