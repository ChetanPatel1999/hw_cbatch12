// pointer to array
#include<stdio.h>
void main()
{
   int arr[5]={12,34,56,78,90};
   int *ptr;
   ptr=&arr[0];
   int i;
   for(i=0;i<5;i++)
   {
    printf("%d ",*ptr);
    ptr++;
   }
    
}