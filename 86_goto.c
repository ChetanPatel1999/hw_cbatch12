//example of goto stmnt
#include<stdio.h>
void main()
{
 int i=0;
 printf("this is goto example\n");
 lable:
 printf("inside lable \n");
 i++;//3
 if(i<=5)
 {
    goto lable;
 }
 printf("after lable ");
}