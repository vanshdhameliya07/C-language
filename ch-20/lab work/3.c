#include <stdio.h>
void main()
{
    int *ptr;
    int a = 5;

    ptr = &a;
    for (int i = 0; i < 5; i++)
    {
      printf("Address is : %u\n", ptr + i);
    }
    
}