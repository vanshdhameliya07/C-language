#include <stdio.h>
void main()
{

    int size;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter the array elements:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("a[%d] = %d", i, &a[i]);
    }

    int *ptr = a;

    int mul = 1;

    for (int i = 0; i < size; i++)
    {
        int mul = ptr[i] * a[i];
        printf("%d\t", mul);
    }
}