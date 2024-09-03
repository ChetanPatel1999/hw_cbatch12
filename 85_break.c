//wap to search given number in given table.
#include<stdio.h>
void main()
{
 int i,tab,f=0;
 int n=8;
 int a=24;
 for(i=1;i<=10;i++)//2
 {
    tab=i*n;
    if(tab==a)
    {
      f=1;
      break;
    }
 }
 if(f==1)
 {
   printf("num is found in table"); 
 }
 else
 {
     printf("num is not found in table"); 
 }
}