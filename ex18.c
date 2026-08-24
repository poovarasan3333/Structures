// Write a C program to calculate the average marks of N

// students stored in an array of structures.



#include <stdio.h>



struct Student

{

    int roll;

    float marks;

};



int main()

{

    int n,i;

    float sum=0;



    printf("Enter Number of Students: ");

    scanf("%d",&n);



    struct Student s[n];



    for(i=0;i<n;i++)

    {

        printf("Enter Roll Number and Marks: ");

        scanf("%d%f",&s[i].roll,&s[i].marks);



        sum+=s[i].marks;

    }



    printf("Average Marks = %.2f\n",sum/n);



    return 0;

}
