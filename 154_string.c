// strcat() // its combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[] = "chetan";
    char st2[] = "patel";
    printf("string 1 : %s\n", st1);
    printf("string 2 : %s\n", st2);
    strcat(st1, st2);
    printf("string 1 : %s\n", st1);
}