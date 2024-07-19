#include <stdio.h>
main()
{
    int row, col;
    printf("enter element of row:- ");
    scanf("%d", &row);
    printf("enter element of col:- ");
    scanf("%d", &col);

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("element [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
    printf("\n sum :- ");
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("%d ", sum);
}
