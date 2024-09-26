// pointer to variable
#include<stdio.h>
void main()
{
  int a=12,b=90;
  int *ptr;
  ptr=&a;
  printf("value of a : %d\n",a);//12
  printf("address of a : %d\n",&a);//123456
  printf("addres of a by ptr : %d\n",ptr);//123456
  printf("value of a by ptr : %d\n",*ptr);//12
}