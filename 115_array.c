//array example 
#include<stdio.h>
void main()
{
  int a[]={12,34,56,78,90};
  int i;
  printf("size of array : %d\n",sizeof(a));
  printf("array element are : ");
  for(i=0;i<5;i++)//2
  {
    printf("%d ",a[i]);
  }
  //sum array elelemt code
  int sum=0;
  for(i=0;i<5;i++)//5
  {
    sum=sum+a[i];//270
  }
  printf("\nsum of array element : %d",sum);


}