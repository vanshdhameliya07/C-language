#include <stdio.h>
void main()
{

    int a = 5;
    int *ptr = &a;

    printf("Address is : % u", *ptr);
}