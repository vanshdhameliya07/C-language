#include <stdio.h>

main()
{
    char reverse[20];
    printf("enter name: ");
    scanf("%s", &reverse);

    int i;

    for (i = 0; reverse[i] != '\0'; i++)
    {
        printf("%d", reverse[i]);
    }
    printf("\n\n");
    printf("len: %d\n\n", i);

    // r a j  j a r
    // 0 1 2  0 1 2

    int len = i;
    int n = 0;

    char var[20];
    for (int i = len - 1; i >= 0; i--)
    {
        var[n++] = reverse[i];
    }

    printf("\n\n");

    int palindrome = 1;
    for (int i = 0; i < len; i++)
    {
        if (reverse[i] == var[i])
        {
            palindrome = 0;
        }
        else
        {
            palindrome = 1;
            break;
        }
    }

    if (palindrome == 0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
}
