#include <stdio.h>
main()
{
    char name[20];

    printf("enter name : ");
    scanf("%[^\n]", &name);

    printf("\n\n");
    printf("name:", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
    }
    printf("name %s", name);
}
