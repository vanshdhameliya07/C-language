#include <stdio.h>
main()
{
    int size, i,sum = 0;
    printf("array number of element :- ");
    scanf("%d", &size);

    int a[size];
    printf("array input\n\n ");

    for (i = 0; i < size; i++)
    {
        printf("enter element :-", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    printf("\n\n\n");
    printf("sum = %d ", sum);
    printf("avg = %f\n", (float)sum / size);
}
