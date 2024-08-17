// club manage project
#include<stdio.h>
void main()
{
 int age,num;
 printf("enter your age : ");
 scanf("%d",&age);//15
 if(age>=18)
 {
    printf("welcome to clube ....\n");
    printf("menue......\n");
    printf("1. pasta =120\n");
    printf("2. noodles =100\n");
    printf("3. sandwitch =150\n");
    printf("please order : ");
    scanf("%d",&num);
    if(num==1)
    {
      printf("your pasta order is done please pay 120 rs");
    }
    else if (num==2)
    {
      printf("your noodles order is done please pay 100 rs");
    }
    else if(num==3)
    {
      printf("your sandwitch order is done please pay 150 rs");
    }
    else{
        printf("please enter right number");
    }

 }
 else
 {
    printf("please try after %d year",18-age);
 }
}