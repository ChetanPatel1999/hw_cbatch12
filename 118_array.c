//take array element form user and display them.
#include<stdio.h>
void main()
{
  int arr[5],i;
  printf("enter array element : ");
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("array element are : ");
  for(i=0;i<5;i++)
  {
    printf("%d ",arr[i]);
  }
}