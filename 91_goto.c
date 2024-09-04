//check even odd by goto stmnt
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n;
 n=16;
 //exit(0);
 printf("even odd check programm : \n");
 if(n%2==0)
 {
    goto even;
 }
 else{
    goto odd;
 }
 even:
 printf("even number\n");
 exit(0); // its help to instance exit from programm
 odd:
 printf("odd number");
}