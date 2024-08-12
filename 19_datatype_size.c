// data type size in memeory
#include<stdio.h>
void main()
{
	int num;// 4 byte
	int n; // 4 byte
	char ch; // 1 byte
	long long int num2; // 8 byte
	short int num3; // 2 byte
	float f; // 4 byte
	double num4; // 8 byte
	printf("size of int = %d byte\n",sizeof(int));
	printf("size of char = %d byte\n",sizeof(ch));
	printf("size of long long int = %d byte\n",sizeof(num2));
	printf("size of short int = %d byte\n",sizeof(num3));
	printf("size of float = %d byte\n",sizeof(f));
	printf("size of double = %d byte\n",sizeof(num4));
}
