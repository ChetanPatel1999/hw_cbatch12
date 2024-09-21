// wap to find max number from array.
#include <stdio.h>
int maxval(int arr[], int s)
{
    // code for find max element from array
    int i;
    int max = arr[0];
    for (i = 0; i < s; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
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

    int res = maxval(arr, n);

    printf("\nmax val = %d",res);
}