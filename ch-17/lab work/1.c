#include <stdio.h>
main()
{
    char name[20];

    printf("enter name : ");
    scanf("%[^\n]", &name);

    printf("\n\n");
    printf("name: %s\n", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
    }
    printf("name %s", name);
}


// Q-1 Write a Program to convert the given string in uppercase without using any string
// function.

// For example,

// Input:
// Enter any string: hello world


// Output:
// Uppercase string: HELLO WORLD