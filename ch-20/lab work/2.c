#include <stdio.h>
void main()
{
    int x, y;

    int *ptr = &x;
    int *ptr2 = &y;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of x: ");
    scanf("%d", &y);
    printf("Before swapping\n");
    printf("ptr = %d\n", *ptr);
    printf("pt2 = %d\n\n", *ptr2);

    x = x + y; // 5+3 = 8
    y = x - y; // 8-3 = 5
    x = x - y; // 8-5 = 3

    printf("ptr = %d\n", *ptr);
    printf("pt2 = %d\n", *ptr2);
}