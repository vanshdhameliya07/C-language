#include <stdio.h>
main()
{
    int i, j, no = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %d ", no);
            no++;
        }
        printf("\n");
    }
}

// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5