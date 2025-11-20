#include <stdio.h>
int myadd (int a,int b)
{
    int sum = a+b;
    return sum;
}
void main()
{
int a = 13,b = 12 ;
printf ("sum is %d\n",myadd(a,b));
int c = 35,d = 43 ;
printf("sum is %d\n",myadd(c,d));
}

