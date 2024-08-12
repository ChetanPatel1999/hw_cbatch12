//assignment operator
#include<stdio.h>
void main()
{
 int a=7;
 int b=4;
 printf("value of a = %d\n",a);
 printf("value of b = %d\n",b);
 //a+=b;// a=a+b;
 //b-=a;
 //a*=b;
 //a/=b;
 a%=b;
 //b%=b;
 printf("value of a = %d\n",a);//3
 printf("value of b = %d\n",b);//4
}
