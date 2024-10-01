//we can access one by one charcter from string
// using strlen() fuction
#include<stdio.h>
#include<string.h>
void main()
{
 char s[]="chetan patel and aman";
 int i;
 for(i=0;i<strlen(s);i++)
 {
    printf("%c ",s[i]);
 }
}