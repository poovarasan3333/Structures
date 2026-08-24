// Write a C program to pass a structure to a function
// by value and print its contents.

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void display(struct Employee e)
{
    printf("\nEmployee Details\n");
    printf("ID     : %d\n",e.id);
    printf("Name   : %s\n",e.name);
    printf("Salary : %.2f\n",e.salary);
}

int main()
{
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d",&e.id);

    printf("Enter Name: ");
    scanf(" %[^\n]",e.name);

    printf("Enter Salary: ");
    scanf("%f",&e.salary);

    display(e);

    return 0;
}
