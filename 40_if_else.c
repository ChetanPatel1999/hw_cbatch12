//wap to cheak voter is eligible for casting vote or not.
#include<stdio.h>
void main()
{
  int age;
  printf("enter age of voter : ");
  scanf("%d",&age);//67
  if(age>=18)
  {
    printf("voter is eligible ");
  } 
  else{
    printf("voter is not eligible");
  }
}