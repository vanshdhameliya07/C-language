#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);  // No need for '&' since 'name' is already an array

    int i, space = 0;

    for (i = 0; name[i] != '\0'; i++)
    {
        printf("%d", name[i]);
    }
    printf("\n\n");

    printf("Length: %d\n\n", i);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
    }
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == '_')  // Correct condition to check for spaces
        {
            space++;
        }
    }

    printf("NAME: %s \n", name);
    printf("Spaces: %d\n", space);

    return 0;  // Added return statement for main function
}
