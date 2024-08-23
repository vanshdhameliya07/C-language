#include <stdio.h>
main()
{
    int i, j, no = 11;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", no);
            no++;
            no++;
            no++;
            no++;
            no++;
            no++;
            no++;
            no++;
            no++;
            no++;
            no++;
        }
        printf("\n");
    }
}
// 11
// 22 33
// 44 55 66
// 77 88 99 110
// 121 132 143 154 165

// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1