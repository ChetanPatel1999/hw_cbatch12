//no return type no argument
#include<stdio.h>
void add()
{
  
    int a, b, c;
    printf("this is addition programm\n");
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum of %d and %d = %d\n", a, b, c);
}
void main()
{
   add();
   add();
}