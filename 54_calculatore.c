//make a caluclater
#include<stdio.h>
void main()
{
 int num,a,b,ans; 
 printf("welcome my calculator....\n");
 printf("press 1 for add :\n");
 printf("press 2 for sub :\n");
 printf("press 3 for mul :\n");
 printf("press 4 for div :\n");
 printf("press 5 for exit :\n");
 printf("press a number  :");
 scanf("%d",&num);
 switch (num)
 {
   case 1:
      printf("addition program : \n");
      printf("enter two number : ");
      scanf("%d%d",&a,&b);
      ans=a+b;
      printf("%d + %d = %d\n",a,b,ans);
   break;
   case 2:
      printf("subtraction program : \n");
      printf("enter two number : ");
      scanf("%d%d",&a,&b);
      ans=a-b;
      printf("%d - %d = %d\n",a,b,ans);
   break;
   case 3:
      printf("multiplication program : \n");
      printf("enter two number : ");
      scanf("%d%d",&a,&b);
      ans=a*b;
      printf("%d * %d = %d\n",a,b,ans);
   break;
   case 4:
      printf("division program : \n");
      printf("enter two number : ");
      scanf("%d%d",&a,&b);
      ans=a/b;
      printf("%d / %d = %d\n",a,b,ans);
   break;
   case 5 : break;
   default:printf("enter num 1 to 5 please\n");
 }
}