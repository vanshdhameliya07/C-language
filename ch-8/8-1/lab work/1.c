#include <stdio.h>
main()
{
    int size, array, i;
    printf("enter size of array :- ");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("a[%d]:-", i);
        scanf("%d", &array);
    }

    printf("Length of an Array: %d", i);
}
