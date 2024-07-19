#include <stdio.h>
main()
{
    int a[5], i, j;

    for (i = 0; i < 5; i++)
    {
        printf("enter element :- ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
}
