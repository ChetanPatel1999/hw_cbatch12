// recursion :- when a fuction call itself is called  recursion.
//wap to display same msg 5 tiems using recursion. 
#include <stdio.h>
void fun()
{
    static int i=1;
    printf("hi i am fun\n");
    i++;//3
    if (i <= 5)
    {
        fun();    
    }

}
void main()
{
    fun();
}