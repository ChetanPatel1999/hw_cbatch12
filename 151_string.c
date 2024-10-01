//strupr() // its convert string into uper case.
#include<stdio.h>
#include<string.h>
void main()
{
 char st[50];
 printf("enter string : ");
 gets(st);
 printf("string : %s\n",st);
 strupr(st);
 printf("string upper case : %s\n",st);



}