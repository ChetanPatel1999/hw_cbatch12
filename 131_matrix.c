// wap to display sum of all matrix element.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter coulm : ");
    scanf("%d", &c);
    int mat1[r][c], mat2[r][c], matsum[r][c];
    int i, j;
    printf("enter matrix1 element : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("enter matrix2 element : \n");
    for (i = 0; i < r; i++) // 2
    {
        for (j = 0; j < c; j++) // 3
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("matrix1 element are : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("matrix2 element are : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    // matrix sum code
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++) // 1
        {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("summatrix element are : \n");
    for (i = 0; i < r; i++) // 3
    {
        for (j = 0; j < c; j++) // 0
        {
            printf("%d ", matsum[i][j]);
        }
        printf("\n");
    }
}