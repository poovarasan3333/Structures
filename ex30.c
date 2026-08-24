// Write a C program to demonstrate nested structures
// using Employee and Address structures.

#include <stdio.h>

struct Address
{
    int doorNo;
    char city[30];
};

struct Employee
{
    int id;
    char name[30];
    struct Address addr;
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d",&e.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]",e.name);

    printf("Enter Door Number: ");
    scanf("%d",&e.addr.doorNo);

    printf("Enter City: ");
    scanf(" %[^\n]",e.addr.city);

    printf("\nEmployee Details\n");
    printf("ID : %d\n",e.id);
    printf("Name : %s\n",e.name);
    printf("Door No : %d\n",e.addr.doorNo);
    printf("City : %s\n",e.addr.city);

    return 0;
}
