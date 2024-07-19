#include <stdio.h>
main()
{
    int i, size1, size2;
    printf("enter size of array size 1   ");
    scanf("%d", &size1);
    printf("enter size of array size 2  ");
    scanf("%d", &size2);
    int a[size1], b[size2];

    for (i = 0; i < size1; i++)
    {
        printf("element of array size 1 :- ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size2; i++)
    {
        printf("element of array size 2  :- ");
        scanf("%d", &b[i]);
    }
    int marge[size1];
    for (i = 0; i < size1; i++)
    {
        marge[i] = a[i];
    }
    for (i = 0; i < size2; i++)
    {
        marge[i] = b[i];
    }
}