//wap to print factors of given numbers.
// 12 = 1 2 3 4 6 12 
// 15 = 1 3 5 15
// 18 = 1 2 3 6 9 18
#include<stdio.h>
void main()
{
 int num,i;
 printf("enter a number : ");
 scanf("%d",&num);//12
 printf("facters of %d : ",num);
 for(i=1;i<=num;i++)//12
 {
    if(num%i==0)
    {
        printf("%d ",i);// 1 2 3 4 6 12
    }
 }

}