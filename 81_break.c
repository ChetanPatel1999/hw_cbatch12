//break example
#include<stdio.h>
void main()
{
   int i,num;
   printf("enter last range : ");
   scanf("%d",&num);
   for(i=1;i<=100;i++)
   {
    printf("%d ",i);
    if(num==i)
    {
        break;
    }
   }
}