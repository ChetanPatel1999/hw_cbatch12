#include <stdio.h>
void main()
{
    char name[] = "my name is chetan patel";
    int i;
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        printf("%c ", name[i]); // c h e t a n
    }

     printf("\n");

    // print only vovel charcter
    for (i = 0; name[i] !='\0' ; i++) // 4
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' ||name[i]=='o' ||name[i]=='u')
        {
            printf("%c ", name[i]); // a 
        }
    }
}