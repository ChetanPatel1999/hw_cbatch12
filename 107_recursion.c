// recursion :- when a fuction call itself is called  recursion.
//wap to display same msg 5 tiems using recursion. 
#include <stdio.h>
int i=1;//global variable
void fun()
{
    printf("hi i am fun\n");
    i++;//6
    if (i <= 5)
    {
        fun(); // recursive calling    
    }

}
void main()
{
    fun();
}