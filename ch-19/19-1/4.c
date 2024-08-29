#include <stdio.h>
void main()
{
    int name[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", name[i]);
    }
    printf("\n\n");

    int *ptr = &name;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *ptr[i]);
    }
    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", ptr[i]);
    }
}