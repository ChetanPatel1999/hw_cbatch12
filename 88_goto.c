//example of goto stmnt
//wap to print table of any number using goto stmnt.
#include<stdio.h>
void main()
{
 int i=1,n;
 printf("enter a num : ");
 scanf("%d",&n);//3
 printf("this is goto example\n");
 lab:
 printf("%d\n",n*i);
 i++;//3
 if(i<=10)
 {
    goto lab;
 }
 printf("after lable ");
}