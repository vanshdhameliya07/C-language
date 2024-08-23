#include <stdio.h>
main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {

        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

// 1
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15
