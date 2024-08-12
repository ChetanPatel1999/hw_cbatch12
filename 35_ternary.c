//ternary/conditional operator
//wap to print greatest number between three numbers.
#include<stdio.h>
void main()
{
	int num1,num2,num3,ans;
	printf("enter three numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);// 144 566 78
	ans= num1>num2 ? num1:num2;
	ans= ans>num3 ? ans:num3; 
	printf("greates num : %d",ans);
}
