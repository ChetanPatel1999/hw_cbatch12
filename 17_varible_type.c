//type of variable 
// local variable :- we can declaire and access local variable inside fuction.
// global variable :- globle varible declaire outside fuction. we can acces them any fuction.
#include<stdio.h>
int g=12; //globla variable
void fun()
{
 int f=34; // local variable
 printf("%d\n",f);
 printf("%d\n",g);	
}
void main()
{
  int a=79;// local variable
  printf("%d\n",a);
  printf("%d\n",g);	
  fun();
}
