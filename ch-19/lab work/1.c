#include <stdio.h>

void sum(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    printf("%d ", sum);
}
void main()
{
    int size, i;
    printf("enter array size = ");
    scanf("%d", &size);

    int a[size];

    for (i = 0; i < size; i++)
    {
        printf("[%d] =", i);
        scanf("%d", &a[i]);
    }

    sum(a, size);
}