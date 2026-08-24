// Write a C program to store three subject marks
// inside a student structure and calculate the percentage.

#include <stdio.h>

struct Student
{
    char name[30];
    float m1,m2,m3;
};

int main()
{
    struct Student s;
    float total, percentage;

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Three Subject Marks: ");
    scanf("%f%f%f",&s.m1,&s.m2,&s.m3);

    total = s.m1+s.m2+s.m3;
    percentage = total/3;

    printf("\nTotal = %.2f",total);
    printf("\nPercentage = %.2f%%",percentage);
printf("\n");
    return 0;
}
