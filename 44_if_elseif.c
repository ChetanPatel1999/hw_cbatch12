//wap to print english word according to number.
#include<stdio.h>
void main()
{
    int num;
    printf("enter a num between 1 to 5 : ");
    scanf("%d",&num);//3
    if(num==1)
    {
        printf("ONE");
    }
    else if(num==2)
    {
        printf("TWO");
    }
    else if(num==3)
    {
        printf("THREE");
    }
    else if(num==4)
    {
        printf("FOURE");
    }
    else if (num==5)
    {
        printf("FIVE");
    }
    else{
        printf("please enter 1 to 5");
    }
}