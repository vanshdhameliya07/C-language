#include <stdio.h>
main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (s = 1; s < i; s++)
        {
            printf(" ");
        }

        for (j = i; j <= 5; j++)
        {
            if (i == 1)
            {
                printf("%d", j);
            }
            else if (i == 2)
            {
                printf("8");
            }
            else if (i == 3)
            {
                printf("%d", j);
            }
            else if (i == 4)
            {
                printf("%d", 64);
            }
            else{
                printf("%d",j);
            }
        }
        printf("\n");
    }
}

// 1 2 3 4 5
//   8 8 8 8
//     3 4 5
//       4 5
//         5