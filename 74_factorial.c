// wap to print factorial of given number.
#include <stdio.h>
void main()
{
    int num, i,fact=1;
    printf("enter a number : ");
    scanf("%d", &num); // 0
    for(i=1;i<=num;i++)//4
    {
        fact=fact*i;//24
    }
    printf("factorial of %d = %d",num,fact);
}