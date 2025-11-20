// write a function which will accept two input parameters x, y and writtens x*x+y*y
#include <stdio.h>
int myadd(int x ,int y)
{
    int sum = x*x + y*y ;
    return sum ;
}
void main ()
{
    int x = 3;
    int y = 1 ;
    printf ("sum is %d", myadd(x,y));
}
