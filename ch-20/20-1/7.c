#include <stdio.h>
void main()
{
    int a = 5;

    int *ptr = &a;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;

    printf("a address = %d", a);

    printf("\n\n");

    printf("ptr2 = %d", **ptr2);

    printf("\n\n");

    printf("ptr3 = %d", ***ptr3);

    printf("\n\n");

    printf("ptr4 = %d", ****ptr4);
}