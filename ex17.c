// Write a C program to read details of N employees
// and display them.

#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    int n,i;

    printf("Enter Number of Employees: ");
    scanf("%d",&n);

    struct Employee e[n];

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);

        scanf("%d",&e[i].id);
        scanf(" %[^\n]",e[i].name);
        scanf("%f",&e[i].salary);
    }

    printf("\nEmployee Details\n");

    for(i=0;i<n;i++)
    {
        printf("%d %s %.2f\n",
        e[i].id,e[i].name,e[i].salary);
    }

    return 0;
}
