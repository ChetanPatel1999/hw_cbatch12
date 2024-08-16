//wap to check given number in range 200 to 500 or not.
#include<stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d",&num);//135
    if(num>=200 && num<=500)
    {
      printf("number in range 200-500");
    }
    else
    {
      printf("number not in range");
    }

}