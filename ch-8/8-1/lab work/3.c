#include <stdio.h>
main()
{
    int size;
    printf("enter size of a = ");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("enter size of b = ");
    scanf("%d", &size);

    int b[size];

    for (int i = 0; i < size; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    int c[size], i;

    for (int i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
    }

    for (int i = 0; i < size; i++)
    {
        printf("Array C is: %d\n, ", c[i]);
    }
}
