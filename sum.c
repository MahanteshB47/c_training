#include <stdio.h>
void main()
{
    int result = 0 ;
    int n;
    printf ("enter the n");
    scanf("%d",&n);
    for ( int i=1; i<=n;i++)
   {
    result = result + i ;
   }
    printf("%d",result);
    
}