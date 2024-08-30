//break with while loop example
#include<stdio.h>
void main()
{
 int i=1;
 while(i<=10)
 {
   printf("%d ",i);//1....5
   if(i==5)
   {
    break;
   }
   i++;
 }
}