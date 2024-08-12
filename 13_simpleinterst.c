//wap to calculate simple interest.
#include<stdio.h>
void main()
{
	float principle,rate,time,si;
	printf("enter principle ammount :");
	scanf("%f",&principle);
	printf("enter rate : ");
	scanf("%f",&rate);
	printf("enter time : ");
	scanf("%f",&time);
	printf("principle ammount : %.2f\n",principle);
	printf("rate : %.2f\n",rate);
	printf("time : %.2f\n",time);
	si=(principle*rate*time)/100;
	printf("simple interest : %.2f",si);
	
}
