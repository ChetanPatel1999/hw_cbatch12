//wap to print state name according to given later.
#include<stdio.h>
void main()
{
  char ch;
  printf("enter a char : ");
  scanf("%c",&ch);//16
  switch(ch)
  {
    case 'm':printf("madhya- pradash");break;
    case 'r':printf("rajsthan");break;
    case 'g':printf("gujrat");break;
    case 'u':printf("uttar-pradesh");break;
    default: printf("no state present for this later");break;

  }
}