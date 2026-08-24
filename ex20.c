// Write a C program to find the employee with the
// highest salary from an array of structures.

#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    int n,i,max=0;

    printf("Enter Number of Employees: ");
    scanf("%d",&n);

    struct Employee e[n];

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("Enter ID: ");
        scanf("%d",&e[i].id);

        printf("Enter Name: ");
        scanf(" %[^\n]",e[i].name);

        printf("Enter Salary: ");
        scanf("%f",&e[i].salary);

        if(e[i].salary>e[max].salary)
            max=i;
    }

    printf("\nEmployee with Highest Salary\n");
    printf("ID     : %d\n",e[max].id);
    printf("Name   : %s\n",e[max].name);
    printf("Salary : %.2f\n",e[max].salary);

    return 0;
}
