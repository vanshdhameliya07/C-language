#include <stdio.h>
#include<string.h>
main()
{
    char name[20],i,f;

    printf("enter name :- ");
    scanf("%[^\n]", &name);
3
    

    for (int i = 0; i < strlen(name); i++)
    {
        int f = 1;
        for (int j = 1; i < strlen(name); j++)
        {
            if (name[i] == name[j])
            {
                f++;
                name[j] = "\0";
            }
        }
    }
    if (name[i] != "\0")
    {
        printf("%c => %d\n", name[i], f);
    }
}
