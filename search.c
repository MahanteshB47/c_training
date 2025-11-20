#include <stdio.h>
int search( int arr[],int key ,int n)
{
    for (int i=0;i<n;i++)
    {
        if (arr[i]==key )
        return 1 ;
    }
    return 0;
}
    void main()
{
    int arr[9]={23,45,67,89,45,23,65,90,74} ;
    int n= 9;
    int key;
    printf ("what are you searching");
    scanf ("%d",&key);
    printf("%d",search(arr,key,n));
}