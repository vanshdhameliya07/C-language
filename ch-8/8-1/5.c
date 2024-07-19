#include <stdio.h>
main()
{
    int row, col, i, j;
    printf("enter row :- ");
    scanf("%d", &row);
    printf("enter col :- ");
    scanf("%d", &col);

    int a[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("elements [%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                printf("even number = %d\n", a[i][j]);
            }
            else
            {
                printf("odd number = %d\n", a[i][j]);
            }
        }
    }
}
