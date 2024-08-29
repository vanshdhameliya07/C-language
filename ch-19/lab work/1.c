#include <stdio.h>
void main()
{

    int ptr[5];

    printf("Enter the array's size: ");
    scanf("%d", &ptr);

    for (int i = 0; i < 3; i++)
    {
        scanf("%d\t", &ptr[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 3; i++)
    {
        int mul = ptr[i] * ptr[i];
        printf("%d\t", mul);
    }
}