#include <stdio.h>
void main()
{
    int a = 10;

    int *ptr = &a;

    printf("%d\n", a);
    printf("%d\n", *ptr);

    a = 35;

    printf("%d\n", a);
    printf("%d", ptr);
}