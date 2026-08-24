// Write a C program to display only the names of all
// students stored in an array of structures.

#include <stdio.h>

struct Student
{
    char name[30];
};

int main()
{
    int n,i;

    printf("Enter Number of Students: ");
    scanf("%d",&n);

    struct Student s[n];

    for(i=0;i<n;i++)
    {
        printf("Enter Name: ");
        scanf(" %[^\n]",s[i].name);
    }

    printf("\nStudent Names\n");

    for(i=0;i<n;i++)
    {
        printf("%s\n",s[i].name);
    }

    return 0;
}
