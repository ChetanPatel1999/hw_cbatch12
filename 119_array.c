// take array element form user and display them.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array size :");
    scanf("%d", &n);//3
    int arr[n], i;
    printf("enter array element : ");
    for (i = 0; i < n; i++) // 5
    {
        scanf("%d", &arr[i]); // arr[4]
    }
    printf("array element are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}