#include <stdio.h>
void add() // fuction defination
{
    int a, b, c;
    printf("this is addition programm\n");
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum of %d and %d = %d\n", a, b, c);
}
void sub() // fuction defination
{
    int a, b, c;
    printf("this is sutraction programm\n");
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    c = a - b;
    printf("sub of %d and %d = %d\n", a, b, c);
}
void main()
{
    printf("start main fuction\n");
    int i;
    for(i=1;i<=5;i++)//6
    {
        add();
    }
    printf("end main fuction\n");
    add();
}
