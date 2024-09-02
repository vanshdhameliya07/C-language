#include <stdio.h>

int print()
{
    printf("\n\nPress 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for  %%\n");
    printf("Press 0 for 0\n");
    printf("\n");
}
int addition(int first, int second)
{
    return first + second;
}
int subtraction(int first, int second)
{
    return first - second;
}
int multiplication(int first, int second)
{
    return first * second;
}
int division(int first, int second)
{
    return first / second;
}
int modulas(int first, int second)
{
    return first % second;
}