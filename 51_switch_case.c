// wap to display days name according to number.
#include<stdio.h>
void main()
{
 int num;
 printf("enter a num : ");
 scanf("%d",&num);//3
 switch(num)
 {
    case 1 :printf("monday");break;
    case 2 :printf("tuesday");break;
    case 3 :printf("wednusday");break;
    case 4 :printf("thursday");break;
    case 5 :printf("friday");break;
    case 6 :printf("saterday");break;
    case 7 :printf("sunday");break;
    default:printf("enter 1 to 7 number only");
 }
}