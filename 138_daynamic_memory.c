// dyanamic memory allocation by malloc
#include <stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,*temp;
    int n;
    printf("enter dyanamic array size : ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int)); // 400
    temp=ptr;
    int i;
    for (i = 0; i < n; i++)//5
    {
        scanf("%d",ptr);//416
        ptr++;//420
    }
    ptr=temp;//400
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    ptr=temp;
    free(ptr); // its free dynamically allocate memory
    //we write also code belove ....
}