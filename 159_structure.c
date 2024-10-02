// structure example
#include <stdio.h>
#include <string.h>
struct pen
{
    char name[20];
    int price;
    float rating;
};
void main()
{
    struct pen p1={"celle",5,3.5}, p2={"goldex",7,4.5}, p3;
  
    printf("pen 1 info ....\n");
    printf("name : %s\n", p1.name);
    printf("price : %d\n", p1.price);
    printf("rating : %.2f\n", p1.rating);

    printf("pen 2 info ....\n");
    printf("name : %s\n", p2.name);
    printf("price : %d\n", p2.price);
    printf("rating : %.2f\n", p2.rating);
}