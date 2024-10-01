//strlwr() // its convert string into lower case.
#include<stdio.h>
#include<string.h>
void main()
{
 char st[50];
 printf("enter string : ");
 gets(st);
 printf("string : %s\n",st);
 strlwr(st);
 printf("string lower case : %s\n",st);
}