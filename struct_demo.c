#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    float marks;
} ;

void main()
{
    struct student s1;
    strcpy (s1.name,"joey");
    s1.age =19;
    s1.marks = 89.6;
    

    struct student s2 ;
    strcpy (s2.name,"raj");
    s2.age = 29;
    s2.marks = 90.6;

    struct student s3 = {"kishor",17,87.9};

    printf ("%s\n",s3.name);
    printf ("%d\n",s3.age);
    printf ("%f\n",s3.marks);


}