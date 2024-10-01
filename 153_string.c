//strrev() // its convert string into reverse order.
#include<stdio.h>
#include<string.h>
void main()
{
 char st[50];
 printf("enter string : ");
 gets(st);
 printf("string : %s\n",st);
 strrev(st);
 printf("reverse string : %s\n",st);
}