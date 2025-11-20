#include <stdio.h>
#include <string.h>
void main()
{
    char name [10]="jwalitha";
    char new[100]="hello";
    //access
    printf ("%c\n",name [7]);
    //length
    printf ("length of string is %d\n",strlen(name));
    strcat (new, name);
    printf("%s",new);
    //  search for a char in string
    printf(strstr(new,"hello"));  // null 
}