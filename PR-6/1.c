#include <stdio.h>
#include <string.h>
main()
{
    char name[20], i;

    printf("enter name :- ");
    scanf("%[^\n]", &name);

    for (int i = 0; i < strlen(name); i++)
    {
        int f = 1;
        for (int j = i + 1; j < strlen(name); j++)
        {
            if (name[i] == name[j])
            {
                f++;
                name[j] = '\0';
            }
        }
        if (name[i] != '\0')
        {
            printf("%c => %d\n", name[i], f);
        }
    }
}
