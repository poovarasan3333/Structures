// Write a C program to create a structure for an address
// containing Door Number, Street, City, and PIN code.

#include <stdio.h>

struct Address
{
    int doorNo;
    char street[50];
    char city[50];
    int pin;
};

int main()
{
    struct Address a;

    printf("Enter Door Number: ");
    scanf("%d",&a.doorNo);

    printf("Enter Street: ");
    scanf(" %[^\n]",a.street);

    printf("Enter City: ");
    scanf(" %[^\n]",a.city);

    printf("Enter PIN Code: ");
    scanf("%d",&a.pin);

    printf("\nAddress\n");
    printf("Door No : %d\n",a.doorNo);
    printf("Street  : %s\n",a.street);
    printf("City    : %s\n",a.city);
    printf("PIN     : %d\n",a.pin);

    return 0;
}
