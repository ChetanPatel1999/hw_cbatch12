// dafault value check calloc or malloc
#include<stdio.h>
#include<stdlib.h>
void main()
{
  int *ptr=calloc(5,4),i;
  for(i=0;i<5;i++)
  {
    printf("%d ",*ptr);//400
    ptr++;
  }


}