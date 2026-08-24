// Write a C program to pass a structure to a function by
// reference and update the salary of an employee.

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void updateSalary(struct Employee *e)
{
    e->salary += 5000;
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

    updateSalary(&e);

    printf("\nUpdated Salary = %.2f\n",e.salary);

    return 0;
}
