// wap to check given char is vovel or consonent.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a alphabet : ");
    scanf("%c", &ch);//p
    if (ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u')
    {
        printf("alphabet is vovel");
    }
    else
    {
        printf("alphabet is consonant");
    }
}