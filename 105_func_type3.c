//with return type with argument
#include<stdio.h>
int cube(int n)
{
    int cb;
    cb=n*n*n;
    return cb;
}
float add(float x , float y)
{
    float c;
    c=x+y;
    return c;
}
char upercase(char ch)//i
{
    char res;
    res=ch-32;//65 a b c d e f g h i=105-32
              //   A B C D E F G H I =73
    return res;
}
int factorial(int n)//5
{
  int fact =1;
  int i;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  return fact;
}

void main()
{
 //printf("cube of 5 = %d\n",cube(5));
 //printf("sum  = %.2f",add(12.4,5.3));
 printf("uper case of i = %c\n",upercase('i'));
 printf("uper case of d = %c\n",upercase('d'));

 printf("factorial of 5 = %d\n",factorial(5));
}