#include <stdio.h>
main()
{
    int size, i;

    printf("enter size of a ");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n");

    printf("enter size of b ");
    scanf("%d", &size);

    int b[size];

    for (int i = 0; i < size; i++)
    {
        printf("[%d] = ", i);
        scanf("%d", &b[i]);
    }

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = a[i] + b[i];
    }

    int *ptr;
    ptr = &sum;
    for (int i = 0; i < size; i++)
    {
        printf("sum = %d\n", *ptr);
    }
}