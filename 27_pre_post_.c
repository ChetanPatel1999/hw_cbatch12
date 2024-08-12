//pre/post increament/deacrement operator
#include<stdio.h>
void main()
{
	int a=12,b;
//	b = a++;//post frist assign a vale in b after that increase a value by 1
    b = ++a; //pre frist a value increase by one after that assign in b
	printf("a = %d\n",a);//13
	printf("b = %d\n",b);//13
	
}
