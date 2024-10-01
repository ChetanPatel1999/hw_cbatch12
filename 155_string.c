// strcpy() // its copy string one variable into another variable.
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[] = "chetan";
    char st2[50];
    // strcpy(st2,st1);
    strcpy(st2, "rohit");
    printf("string 1 : %s\n", st1);
    printf("string 2 : %s\n", st2);
}