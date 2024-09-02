#include <stdio.h>
void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x -*y;
}
void main()
{
    int a, b;
    printf("enter a :- ");
    scanf("%d", &a);
    printf("enter b :- ");
    scanf("%d", &b);

    swap(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}