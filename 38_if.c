// if exampel
#include<stdio.h>
void main()
{
  int num;
  printf("enter a num :");
  scanf("%d",&num);// 5
  if(num==1)
  {
    printf("GOOD MORNING\n");
  }
  if(num==2)
  {
    printf("GOOD AFTERNOON\n");
  }
  if(num==3)
  {
    printf("GOOD EVENING\n");
  }
  if(num>3)
  {
    printf("enter 1 ,2 or 3 only");
  }
}