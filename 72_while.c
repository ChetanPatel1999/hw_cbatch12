//wap to print evensum and oddsum of all numbers between 1 to 10.
#include<stdio.h>
void main()
{
 int i,e,t,evensum=0,oddsum=0;
 printf("enter start val : ");
 scanf("%d",&i);
 printf("enter end val : ");
 scanf("%d",&e);
 t=i;
 while(i<=e)
 {
    if(i%2==0)
    {
       evensum=evensum+i;
    }
    else{
       oddsum=oddsum+i;
    }
    i++;
 }
 // 1 2 3 4 5 6 7 8 9 10
 printf("evensum of %d to %d := %d\n",t,e,evensum);//30
 printf("oddsum of %d to %d := %d\n",t,e,oddsum);//25
}