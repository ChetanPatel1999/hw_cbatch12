//fgets() : is used to take string from user
//fputs() : is used to display data
#include<stdio.h>
void main()
{
  char name[50];
  fgets(name,50,stdin);
  fputs(name,stdout);
  int i;
  for(i=0;name[i]!='\0';i++)
  {
    printf("%c ",name[i]);
  }
}