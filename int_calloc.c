#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *p=(float *)calloc(4,sizeof(float));
    p[0]=23.45;
    p[1]=78.3;
    p[2]=43.2;
    p[3]=98.78;
    printf("%f",p[2]);
    free(p);
}