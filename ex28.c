// Write a C program to demonstrate the difference

// between direct member access (.) and

// pointer member access (->).



#include <stdio.h>



struct Student

{

    int roll;

    char name[30];

};



int main()

{

    struct Student s={101,"Poovarasan"};

    struct Student *ptr=&s;



    printf("Using . operator\n");

    printf("%d %s\n",s.roll,s.name);



    printf("\nUsing -> operator\n");

    printf("%d %s\n",ptr->roll,ptr->name);



    return 0;

}
