#include <stdio.h>
int cubes(int *a)
{
    return (*a) * (*a)*(*a);
}
void main()
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
            printf("element [%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("output = \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", cubes(&a[i][j]));
        }
        printf("\n");
    }
    
}