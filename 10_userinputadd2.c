//wap to take two float value from user and print their sum.
#include<stdio.h>
void main()
{
	float num1,num2,sum;
	printf("this is addition programm \n");
	printf("________________________________\n");
	printf("enter frist value : ");
	scanf("%f",&num1);
	printf("enter second value : ");
	scanf("%f",&num2);
	printf("value of num1 = %.2f\n",num1);
	printf("value of num2 = %.2f\n",num2);
	sum=num1+num2;
	printf("sum of %.2f and %.2f = %.2f",num1,num2,sum);
}
