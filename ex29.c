// Write a C program to find the size of different
// structures using sizeof().

#include <stdio.h>

struct A
{
    char c;
    int i;
};

struct B
{
    char c;
    double d;
};

int main()
{
    printf("Size of Structure A = %lu\n",sizeof(struct A));
    printf("Size of Structure B = %lu\n",sizeof(struct B));

    printf("\nPadding is added by the compiler");
    printf("\nto align data for faster memory access.");
printf("\n");
    return 0;
}
