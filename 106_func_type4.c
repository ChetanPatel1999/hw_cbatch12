//with return type but no argument
#include<stdio.h>
int add()
{
  
    int c,a,b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    c = a + b;
    return c;
}
void main()
{
 int res=add();
 printf("sum = %d\n",res);
 printf("sum = %d\n",add());
}