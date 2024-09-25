// wap to display sum of all matrix element.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter coulm : ");
    scanf("%d", &c);
    int mat[r][c];
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix element are : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    //sum of all element
    int sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+mat[i][j];
        }
    } 
    printf("sum of all element = %d",sum);
}