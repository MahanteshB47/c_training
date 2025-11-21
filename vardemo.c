#include <stdio.h> 
#include <stdarg.h>
void display (int count ,...)
{
    va_list list ;  //create a bag
    va_start (list,count); //open the bag
    for (int i = 1;i<=count ;i++)
    {
        int n = va_arg (list,int);
        printf ("%d ",n);
    }
    va_end (list);//close the bag
}
void main()
{
    display(5,45,23,34,67,89);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      