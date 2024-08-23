#include <stdio.h>
main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        for (s = 1; s < i; s++)
        {
            printf("    ");
        }

        for (j = 5; j >= i; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
        
    }

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (s = 5; s > i; s--)
        {
            printf("    ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}
// 1 2 3 4 5 5 4 3 2 1
// 2 3 4 5     5 4 3 2
// 3 4 5         5 4 3
// 4 5             5 4
// 5                 5
// 1                 1
// 1 2             1 2
// 1 2 3         1 2 3
// 1 2 3 4     1 2 3 4
// 1 2 3 4 5 1 2 3 4 5