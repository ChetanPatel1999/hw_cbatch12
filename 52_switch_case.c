//wap to check even odd number.
#include<stdio.h>
void main()
{
  int num;
  printf("enter a num : ");
  scanf("%d",&num);//16
  switch(num%2==0)
  {
    case 1:printf("even number");break;
    case 0:printf("odd number");break;
  }
}