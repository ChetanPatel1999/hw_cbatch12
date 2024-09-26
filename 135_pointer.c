// if we do ptr++ so ptr value increas according to ptr datatype size
#include<stdio.h>
void main()
{
  int a=12;
  int *ptr;
  ptr=&a;
  printf("adress of a = %d\n",&a);//1234
  printf("adress of a by ptr= %d\n",ptr);//1234
  ptr++;
  printf("adress of a = %d\n",&a);//1234
  printf("adress of a by ptr= %d\n",*ptr);//1238
}