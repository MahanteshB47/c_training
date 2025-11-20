// writr a c function which will accepcet 1 input parameter r and writtens the perimeter of circle , declare pi as a constant
#include <stdio.h>
float perimeter (int r)
{
    const float pi = 3.14 ;
    float peri = 2*pi*r;
    return peri ;
}
void main()
{
    int r = 3;
    printf ("%f",perimeter(r));//function call
}