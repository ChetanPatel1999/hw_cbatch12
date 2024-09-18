// wap to print a msg 5 times using recursion.
#include <stdio.h>
void main()
{
    static int i = 1; // its exicute only onec time in programm
    printf("hello world institute\n");
    i++; // 6
    if (i <= 5)
    {
        main();
    }
}