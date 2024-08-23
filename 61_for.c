//wap to print odd number 1 to 20.
#include<stdio.h>
void main()
{
 int i;
 printf("odd numbers serise : ");
 for(i=1;i<=20;i++)//4
 {
    if(i%2==1)
    {
        printf("%d ",i);//1 3 5 7 9 ....
    }
 }
}