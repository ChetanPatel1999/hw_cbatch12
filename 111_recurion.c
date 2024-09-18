//wap to display 1 to numbers  using recursion. 
#include <stdio.h>
void num1_10()
{
    static int i=1;
    printf("%d\n",i);
    i++;//3
    if (i <= 10)
    {
        num1_10();    
    }

}
void main()
{
    num1_10();
}