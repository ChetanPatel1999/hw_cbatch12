//wap to display sum 1 to 10 number using recursion. 
#include <stdio.h>
int num1_10(int s,int e)
{
    static int sum=0;
    sum=sum+s;
    s++;
    if (s <= e)
    {
        num1_10(s,e);    
    }
    return sum;
}
void main()
{
    int res = num1_10(1,15);
    printf("sum 1 to 10 = %d",res);
}