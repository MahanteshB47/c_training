//write a c function which will accepcet 3 parameter l,b,h and writtens volume of cube 
#include <stdio.h>
int volume (int l, int b,int h)
{
    int v = l*b*h;
    return v;
}
void main()
{
    int l=3 , b =3 ,h=3;
    printf ("%d",volume(l,b,h));
}