//we can change array element by indexing 
#include<stdio.h>
void main()
{
  int arr[]={12,34,56,78,90};
  int i;
  arr[2]=700; // we can change array element by indexing 
  printf("array element are : ");
  for(i=0;i<5;i++)
  {
    printf("%d ",arr[i]);
  }
}