#include<stdio.h>
int main()
{
    int Mat1[100][100], Mat2[100][100], Mat[100][100];
    int row1,col1,row2,col2;
    int i,j,k;

    printf("Enter row and column of Matrix 1: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter row and column of Matrix 2: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2)
    {
        printf("Multiplication is not possible");
    }
    else
    {
        for (i=0; i<row1; i++)
        {
            for (j = 0; j<col1; j++)
            {
                printf("Enter element [%d][%d]: ", i, j);
                scanf(" %d", &Mat1[i][j]);
            }
        }
        printf("\nMatrix 1:\n");

        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                printf("%d ", Mat1[i][j]);
            }
            printf("\n");
        }

         for (i=0; i<row2; i++)
        {
            for (j = 0; j<col2; j++)
            {
                printf("Enter element [%d][%d]: ", i, j);
                scanf(" %d", &Mat2[i][j]);
            }
        }

        printf("\nMatrix 2:\n");

        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                printf("%d ", Mat2[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i<row1; i++)
        {
            for (j = 0; j<col2; j++)
            {
                Mat[i][j] = 0;
                for (k=0; k<col1; k++)
                {
                    Mat[i][j]= Mat[i][j]+Mat1[i][k]*Mat2[k][j];
                }
            }
        }
        printf("\nResult after Multiplication: \n");
        for (i=0; i<row1; i++)
        {
            for (j=0; j<col2;j++)
            {
                printf(" %d", Mat[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}