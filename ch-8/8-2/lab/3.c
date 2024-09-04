#include <stdio.h>
main()
{
    int row, col;
    printf("enter row :- ");
    scanf("%d", &row);
    printf("enter col :- ");
    scanf("%d", &col);

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            printf("element [%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("diagonal array:-\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                printf("%d", a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n ");
    }

    printf("\n\n");
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j)
            {
                sum = sum + a[i][j];
            }
            
        }
    }
    printf("The sum of diagonal elements of an Array: %d", sum);
}
