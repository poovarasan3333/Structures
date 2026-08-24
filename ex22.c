// Write a C program to swap two structures
// using a temporary structure variable.

#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
};

int main()
{
    struct Student s1, s2, temp;

    printf("Enter First Student Roll and Name: ");
    scanf("%d %[^\n]", &s1.roll, s1.name);

    printf("Enter Second Student Roll and Name: ");
    scanf("%d %[^\n]", &s2.roll, s2.name);

    temp = s1;
    s1 = s2;
    s2 = temp;

    printf("\nAfter Swapping\n");
    printf("Student 1 : %d %s\n", s1.roll, s1.name);
    printf("Student 2 : %d %s\n", s2.roll, s2.name);

    return 0;
}
