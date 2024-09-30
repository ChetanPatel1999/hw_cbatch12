//gets() : is used to take string from user
//puts() : is used to display data
#include<stdio.h>
void main()
{
  char name[50];
  gets(name);
  puts(name);
  int i;
  for(i=0;name[i]!='\0';i++)
  {
    printf("%c ",name[i]);
  }
}