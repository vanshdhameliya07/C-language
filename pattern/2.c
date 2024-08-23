#include <stdio.h>
main()
{
    int i, j, no = 1;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (no % 2 == 0)
            {
                printf("%c", no + 64);
            }
            else
            {
                printf("%d", no);
            }
        }
        printf("\n");
    }
}
// 1 b 3 d 5
// f 7 h 9
// j 11 l
// 13 n
// 15

// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5