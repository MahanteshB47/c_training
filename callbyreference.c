// write a function multiply by three numbers and call by reference
#include <stdio.h>
void product(int *a,int *b,int *c)
{
    int product = (*a)*(*b)*(*c) ;
    printf ("%d\n",product);
}    
void main()
{
    int a = 3;
    int b = 4;
    int c=3;
    product (&a,&b,&c);


}