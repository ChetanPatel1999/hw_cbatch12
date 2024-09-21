//take array element form user and display them.
#include<stdio.h>
void main()
{
  int arr[10],i;
  printf("enter array element : ");
  for(i=0;i<10;i++)//5
  {
    scanf("%d",&arr[i]);//arr[4]
  }
  printf("array element are : ");
  for(i=0;i<10;i++)
  {
    printf("%d ",arr[i]);
  }
}