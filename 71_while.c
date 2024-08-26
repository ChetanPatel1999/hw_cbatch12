//wap to print cubes 1 to 10.
#include<stdio.h>
void main()
{
 int i=1,cube;
 while(i<=5)
 {
    cube=i*i*i;
    printf("cube of %d = %d\n",i,cube);
    i++;
 }
}