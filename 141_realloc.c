// realloc increse memory dayanamically
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, *temp, i;
    ptr = (int *)malloc(5 * sizeof(int));
    temp = ptr;
    printf("adresses of memory dynamically allocate: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }
    ptr = temp;
    int *nptr = realloc(ptr, 8 * sizeof(int));
    printf("adresses of new memory dynamically allocate: ");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", nptr);
        nptr++;
    }
}