// %[^\n]s is used to take santance
#include<stdio.h>
void main()
{
  char name[50];
  scanf("%[^\n]s",name);
  printf("name : %s",name);
}