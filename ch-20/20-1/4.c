#include <stdio.h>
void main()
{
    int name[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", name[i]);
    }
    printf("\n\n");

    int *ptr[5];

    printf("enter pointer :- ");
    scanf("%d", *ptr);

    for (int i = 0; i <5; i++)
    {
        ptr[i] = &name[i];
    }
    for (int i = 0; i <5; i++)
    {
        printf("%d\n",&name[i]);
    }
    

    printf("\n\n");
}