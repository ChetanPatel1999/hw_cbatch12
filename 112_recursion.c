//wap to display 1 to 20 even number numbers  using recursion. 
#include <stdio.h>
void even_num()
{
    static int i=1;
    if(i%2==0)
    {
        printf("%d ",i); //2 4
    }
    i++;//4
    if (i <= 20)
    {
        even_num();    
    }

}
void main()
{
    even_num();
}