//create a structure with 3 variable name of the car maximum speed and price store in the array of structure and display
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name[100];
    float speed;
    int price ;

};
void main()
{
    int n;
    printf("enter the number of car :");
    scanf ("%d",&n);
    struct car c[n];
    for (int i = 0; i <n; i++)
    {
        printf ("enter the name of car");
        scanf ("%s",c[i].name);

        printf ("enter the speed of the car");
        scanf("%f",&c[i].speed);

        printf ("enter the prize of the car: ");
        scanf("%d",&c[i].price);
    }
    printf ("your information :\n");
    for (int i = 0; i <n; i++)
    {
        printf ("%s\n",c[i].name);
        printf("%f\n",c[i].speed);
        printf("%d\n",c[i].price);
    }

}