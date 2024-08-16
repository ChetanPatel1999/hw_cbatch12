// wap to find greatest number between three numbers.
#include<stdio.h>
void main()
{
 int num1,num2,num3;
 printf("enter three numbers : ");
 scanf("%d%d%d",&num1,&num2,&num3);// 122  45  78
 if(num1>num2 && num1>num3)
 {
    printf("greates num : %d",num1);
 }
 else if(num2>num3)
 {
     printf("greates num : %d",num2);
 }
 else{
     printf("greates num : %d",num3);
 }
}