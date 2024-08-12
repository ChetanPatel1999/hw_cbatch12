//ternary/conditional operator
//wap to print greatest number between two numbers.
#include<stdio.h>
void main()
{
	int num1,num2,ans;
	printf("enter two numbers : ");
	scanf("%d%d",&num1,&num2);//56  88
	ans= num1>num2 ? num1:num2;
	printf("greates num : %d",ans);
}
