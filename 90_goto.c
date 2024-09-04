//example of goto stmnt
//wap to print 1 to 20 number using goto stmnt.
#include<stdio.h>
void main()
{
 int i=1;
 printf("this is goto example\n");
 i++;//2
 if(i<=20)
 {
    goto lable;
 }
 printf("hi students");
 printf("hello world institute");
 lable:
 printf("after lable ");
}