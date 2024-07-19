#include <stdio.h>
main()
{
    int i, size, sum = 0;
    printf("enter element array a :- ");
    scanf("%d", &size);

    int a[size];

    for (i = 0; i < size; i++)
    {
        printf("element of  :- ");
        scanf("%d", &a[i]);
    }
    int b[size];

    printf("enter element array b :- ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("element of  :- ");
        scanf("%d", &b[i]);
    }

    for (i = 0; i < size; i++)
    {
        sum = a[i] + b[i];
        printf("%d ", sum);
    }
}
