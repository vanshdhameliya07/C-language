#include <stdio.h>
main()
{
    char name[20];
    printf("enter name : ");
    scanf("%s", &name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] > 'a' && name[i]<'z')
        {
           name[i]-=32;
        }
    }
    printf("NAME");
}