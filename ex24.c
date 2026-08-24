// Write a C program to calculate the age of a person
// using a Date of Birth structure.

#include <stdio.h>

struct DOB
{
    int day,month,year;
};

int main()
{
    struct DOB d;
    int currentYear=2026;

    printf("Enter Birth Day Month Year: ");
    scanf("%d%d%d",&d.day,&d.month,&d.year);

    printf("Age = %d Years",currentYear-d.year);
printf("\n");
    return 0;
}
