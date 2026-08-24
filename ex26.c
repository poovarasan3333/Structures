// Write a C program to store bank account information
// and calculate annual interest.

#include <stdio.h>

struct Account
{
    int accNo;
    char name[30];
    float balance;
};

int main()
{
    struct Account a;
    float rate,interest;

    printf("Enter Account Number: ");
    scanf("%d",&a.accNo);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]",a.name);

    printf("Enter Balance: ");
    scanf("%f",&a.balance);

    printf("Enter Interest Rate: ");
    scanf("%f",&rate);

    interest=(a.balance*rate)/100;

    printf("\nAnnual Interest = %.2f\n",interest);

    return 0;
}
