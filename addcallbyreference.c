// write a c program which add 3 numbers and call by reference
#include <stdio.h>
void add(int *a,int *b,int *c)
{
    int add = (*a)+(*b)+(*c) ;
    printf("%d\n",add);
}
void main()
{
    int a = 3;
    int b = 4;
    int c=3;
    add (&a,&b,&c);
}