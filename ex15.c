// Write a C program to return a structure from a function
// after reading employee details.

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

struct Employee readEmployee()
{
    struct Employee e;

    printf("Enter ID: ");
    scanf("%d",&e.id);

    printf("Enter Name: ");
    scanf(" %[^\n]",e.name);

    printf("Enter Salary: ");
    scanf("%f",&e.salary);

    return e;
}

int main()
{
    struct Employee e;

    e=readEmployee();

    printf("\nEmployee Details\n");
    printf("ID     : %d\n",e.id);
    printf("Name   : %s\n",e.name);
    printf("Salary : %.2f\n",e.salary);

    return 0;
}
