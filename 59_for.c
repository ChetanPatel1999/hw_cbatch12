//wap to print table of given number.
#include<stdio.h>
void main()
{
 int i,n,tab;
 printf("emter a num : ");
 scanf("%d",&n);//7
 printf("table of %d :\n",n);
 for(i=1;i<=10;i++)//1
 {
    tab=i*n;
    printf("%d\n",tab);
 }
}