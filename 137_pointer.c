// pointer to array
#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr;
    ptr = &arr[0]; // 400
    int i;
    for (i = 0; i < 5; i++)//5
    {
        scanf("%d",ptr);//416
        ptr++;
    }
    ptr= &arr[0];
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}