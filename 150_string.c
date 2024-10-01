//strlen() // its return string length
#include<stdio.h>
#include<string.h>
void main()
{
 char st[50];
 printf("enter string : ");
 gets(st);
 int n=strlen(st);
 printf("string length : %d",n);
}