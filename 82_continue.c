//continue with for loop example
#include<stdio.h>
void main()
{
 int i;
 for(i=1;i<=10;i++)//6
 {
    if(i==6)
    {
       continue;
    }
     printf("%d \n",i);// 1 2 3 4 5 7 8 9 10
 }
}