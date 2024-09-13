#include<stdio.h>
void fun()
{
    printf("hi i am fun \n");
}
void fun1()
{
   
    printf("hi i am fun1 \n");
    fun();
    printf("end fun1\n");
}
void fun2()
{
    
    printf("hi i am fun2 \n");
    fun1();
    printf("end fun2\n");
}
void main()
{
  printf("hi i am main \n");
  fun2();
  printf("end main function\n");

}