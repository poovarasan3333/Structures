// Write a C program to use typedef for declaring structures.

#include <stdio.h>

typedef struct
{
    int roll;
    char name[30];
}Student;

int main()
{
    Student s;

    printf("Enter Roll Number: ");
    scanf("%d",&s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]",s.name);

    printf("\nStudent Details\n");
    printf("Roll : %d\n",s.roll);
    printf("Name : %s\n",s.name);

    return 0;
}
