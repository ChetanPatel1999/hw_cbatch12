//wap to print numbers in given range.
#include<stdio.h>
void main()
{
 int i=1,s,e;
 printf("enter starting range : ");
 scanf("%d",&s);
 printf("enter ending range : ");
 scanf("%d",&e);
 for(i=s;i<=e;i++)
 {
    printf("%d",i);
 }
}