#include <stdio.h>
main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
        {

            if (i == 1)
            {
                printf(" A ");
            }
            else if (i == 2)
            {
                printf(" 2 ");
            }
            else if (i == 3)
            {
                printf(" C ");
            }
            else if (i == 4)
            {
                printf(" 4 ");
            }
            else
            {
                printf(" E ");
            }
        }
        printf("\n");
    }
}
// a a a a a
// 2 2 2 2
// c c c
// 4 4
// e

// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5