// Write a C program to implement a library book record
// containing Book ID, Name, Author, Copies Available,
// and display all details.

#include <stdio.h>

struct Book
{
    int id;
    char name[40];
    char author[40];
    int copies;
};

int main()
{
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d",&b.id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]",b.name);

    printf("Enter Author: ");
    scanf(" %[^\n]",b.author);

    printf("Enter Copies Available: ");
    scanf("%d",&b.copies);

    printf("\nLibrary Book Details\n");
    printf("Book ID : %d\n",b.id);
    printf("Book Name : %s\n",b.name);
    printf("Author : %s\n",b.author);
    printf("Copies : %d\n",b.copies);

    return 0;
}
