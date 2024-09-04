//example of goto stmnt
//wap to print 1 to 10 number using goto stmnt.
#include<stdio.h>
void main()
{
 int i=1;
 printf("this is goto example\n");
 lable:
 printf("%d\n",i);
 i++;//3
 if(i<=10)
 {
    goto lable;
 }
 printf("after lable ");
}