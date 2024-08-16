// wap to check given number is nagative positive or zero.
#include<stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d",&num);//-12
    if(num==0)
    {
        printf("Zero");
    }
    else if(num>0)
    {
        printf("positive");
    }
    else 
    {
        printf("nagative");
    }
}