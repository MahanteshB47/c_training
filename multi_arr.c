#include <stdio.h>
void main()
{
    int arr[4][2]={  {22,43}  ,  {23,45}  ,{75,69} ,{45,78}};

    for (int i=0;i<4;i++)
{
    for (int j=0;j<2;j++)
    {
        printf ("%d\n",arr[i][j]);
    }
}
}