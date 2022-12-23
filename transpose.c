// PROGTAM TO FIND TRANSPOSE OF A MATRIX
#include <stdio.h>
int main()
{
    int i , j , row , col , matrix[10][10] , *m[10][10];
    
    printf("enter the number of column : ");
    scanf("%d" , &col);
    printf("enter the number of row : ");
    scanf("%d" , &row);

    printf("\nenter elements\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d] : " , i+1 , j+1);
            scanf("%d" , &matrix[i][j]);
            m[i][j] = &matrix[i][j];
        }
    }
    printf("MATRIX is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", *m[i][j]);
        }
        printf("\n\n");
    }
    //transposing the matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            m[j][i] = &matrix[i][j];
        }
    }

    printf("\n");
    printf("TRANSPOSE is : \n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d\t" , *m[i][j]);
        }
        printf("\n\n");
    }
    getch();
    return 0;
}