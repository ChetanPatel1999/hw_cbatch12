//example of goto stmnt
//wap to print 1 to 20 even number using goto stmnt.
#include<stdio.h>
void main()
{
 int i=1;
 printf("this is goto example\n");
 hi:
  if(i%2==0)
  {
    printf("%d\n",i);
  }
 i++;//3
 if(i<=20)
 {
    goto hi;
 }
 printf("after lable ");
}