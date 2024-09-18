//wap to print a msg 5 times using recursion.
#include <stdio.h>
int i=1;// globle variable
void main()
{
    printf("hello world institute\n");
    i++;
    if(i<=5)
    {
        main();
    }
}