//no return type but with argument
#include<stdio.h>
void add(int a,int b)
{
  
    int c;
    c = a + b;
    printf("sum of %d and %d = %d\n", a, b, c);
}
void square(int n)
{
 int sqr;
 sqr=n*n;
 printf("sqare of %d = %d\n",n,sqr);
}
void ascii (char ch)
{
    printf("ascii code of %c = %d\n",ch,ch);
}
void factorial(int n)
{
  int fact =1;
  int i;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("factorial of %d = %d\n",n,fact);
}
void range(int a, int b)
{
    int i;
    for(i=a;i<=b;i++)//2
    {
      factorial(i);  
    }
}
void main()
{
   add(12,5);
   int x=45,y=9;
   add(x,y);
   square(4);
   int i ;
   for(i=1;i<=5;i++)//2
   {
    square(i);
   }
   ascii('A');
   ascii('a');
   factorial(5);
   range(1,5);
}