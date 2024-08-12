//logical  operator
#include<stdio.h>
void main()
{
 int ans;
 //ans=(12<55) && (56!=5) && (45==45) && (12%2==0);
 //ans=(12<5) || (56!=56) || (45==5) || (12%2==1);
 //ans=!(12>5);
 //ans =((12>6) && !(6==9)) ;
 ans =!((12>6) && (6==9)) ;
 printf("ans = %d ",ans);	
}
