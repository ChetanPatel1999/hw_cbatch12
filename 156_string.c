//strcmp() // its compare two string thay are same or different.
//strcmp()// its return 0 if string same or 1 if differnt
#include<stdio.h>
#include<string.h>
void main()
{
 char st1[]="cheta";
 char st2[]="chetan";
 if(strcmp(st1,st2)==0)
 {
   printf("string are same "); 
 }
 else
 {
    printf("string are different");
 }
}