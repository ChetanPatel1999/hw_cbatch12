// wap to displayleft digonal elememnt from matrix element.
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
    int sum=0;
    printf("left digonal of matrix : ");
    for(i=0;i<r;i++)//2
    {
        printf("%d ",mat[i][i]);
        sum =sum+mat[i][i];
    }
    printf("\n sum of left digonal element : %d",sum);
}