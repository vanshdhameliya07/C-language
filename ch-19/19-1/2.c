#include <stdio.h>
void sum(int a, int b, char c);
void main()
{
    sum(10, 20, '$');
}
void sum(int x, int y, char z)
{
    printf("%d + %d =%d ", x, y, x + y);
    printf("\n\n");
    printf("%c", z);
}