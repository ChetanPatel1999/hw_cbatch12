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
    struct pen p1, p2, p3;

    strcpy(p1.name, "cello");
    p1.price = 5;
    p1.rating = 3.5;

    strcpy(p2.name, "goladex");
    p2.price = 7;
    p2.rating = 4.5;

    printf("pen 1 info ....\n");
    printf("name : %s\n", p1.name);
    printf("price : %d\n", p1.price);
    printf("rating : %.2f\n", p1.rating);

    printf("pen 2 info ....\n");
    printf("name : %s\n", p2.name);
    printf("price : %d\n", p2.price);
    printf("rating : %.2f\n", p2.rating);
}