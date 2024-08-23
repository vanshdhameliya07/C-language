#include <stdio.h>
main()
{
    char name[20];

    printf("enter the name =");
    scanf("%[^\n]", &name);

    printf("\n\n");
    printf("Name: %s\n", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
    }
    printf("Name= %s\n", name);
}
