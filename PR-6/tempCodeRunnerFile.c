#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    int i, j, f;

    printf("Enter name: ");
    scanf("%[^\n]", name);

    for (i = 0; i < strlen(name); i++)
    {
        // Skip already visited characters
        if (name[i] == '\0')
            continue;

        f = 1;  // Initialize frequency counter
        for (j = i + 1; j < strlen(name); j++)
        {
            if (name[i] == name[j])
            {
                f++;
                name[j] = '\0';  // Mark the character as visited
            }
        }

        if (name[i] != '\0')
        {
            printf("%c => %d\n", name[i], f);
        }
    }

    return 0;
}
