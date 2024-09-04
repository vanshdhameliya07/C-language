#include <stdio.h>
main()
{
    int size, avg, i;
    printf("enter size of array:- ");
    scanf("%d", &size);

    int a[size], sum = 0;
    for (i = 0; i < size; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    printf("sum = %d", sum);
    printf("\n\n");
    printf("avg = %.2f", (float)sum / size);
}
