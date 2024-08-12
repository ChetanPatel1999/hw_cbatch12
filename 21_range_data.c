//range of data types
#include<stdio.h>
void main()
{
	unsigned short int a=65;
	double d=1234.56;
	printf("size of short int = %d byte\n",sizeof(a));
	printf("value of a = %d\n",a);
	printf("size of double = %d byte\n",sizeof(d));
	printf("value of d = %.2f",d);
}
