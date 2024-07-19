#include <stdio.h>
main()
{
    int row, col, i, j;
    printf("enter row =");
    scanf("%d", &row);
    printf("enter col = ");
    scanf("%d", &col);

    int a[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("element [%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int sum = 0;

    printf("\n\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == 0)
            {

                printf("%d ", a[i][j]);
            }
        }
    }
}