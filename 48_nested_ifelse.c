// wap to find greatest number between three numbers whithout using (&&) logical and operator.
// so now use nested if else
#include<stdio.h>
void main()
{
 int num1,num2,num3;
 printf("enter three numbers : ");
 scanf("%d%d%d",&num1,&num2,&num3);// 122  455  788
 if(num1>num2)
 {
    if(num1>num3)
    {
        printf("greates num : %d",num1);
    }
    else{
        printf("greates num : %d",num3);
    }
 }
 else
 {
    if(num2>num3)
    {
        printf("greates num : %d",num2);
    }
    else
    {
        printf("greates num : %d",num3);
    }
 }

}