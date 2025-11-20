#include <stdio.h>
void main()
{
    int arr[4]={58,89,67,56};
    int *p=arr;
    printf ("%d\n",*p);
    printf ("%d\n",*(p+1));
    printf ("%d\n",*(p+2));
    printf ("%d\n",*(p+3));
}