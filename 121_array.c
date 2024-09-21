// wap to print even odd numbers from array using fuctuion.
#include <stdio.h>
void evennum(int arr[], int s)
{
    // code for even numbers
    int i;
    printf("\neven number : ");
    for (i = 0; i < s; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}
void oddnumber(int arr[], int s)
{
    // code for odd numbers
    int i;
    printf("\nodd number : ");
    for (i = 0; i < s; i++)
    {
        if (arr[i] % 2 == 1)
        {
            printf("%d ", arr[i]);
        }
    }
}
void main()
{
    int n;
    printf("enter array size :");
    scanf("%d", &n); // 3
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
    evennum(arr,n);
    oddnumber(arr,n);
}