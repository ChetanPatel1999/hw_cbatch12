// structure array exmaple
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
    struct pen p[3];
    int i;
    for (i = 0; i < 3; i++) // 2
    {
        printf("enter pen info ....\n");
        printf("enter pen name : ");
        scanf("%s", p[i].name);
        printf("enter price : ");
        scanf("%d", &p[i].price);
        printf("enter rating : ");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\n\npen  info ....\n");
        printf("name : %s\n", p[i].name);
        printf("price : %d\n", p[i].price);
        printf("rating : %.2f\n", p[i].rating);
    }
}
