//write a c function which will accepcet an array its size as n and writtens the difference between first and last element 
#include <stdio.h>
#include <stdlib.h>

int sub_arr (int arr[],int n)
{
    int sub = arr[0]-arr[n-1];
    return abs(sub);
}
void main()
{
    int n = 3;
    int arr[3]={33,61,80};
    printf ("%d",sub_arr (arr,n));
}