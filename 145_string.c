#include<stdio.h>
void main()
{
 char name[]="this is same as my pen";
 int i,c=0;
 for(i=0;name[i]!='\0';i++)
 {
    if(name[i]=='s')
    {
        c++;//4
    }
 }
 printf("total s in string = %d",c);
}