#include <stdio.h>
main()
{
    char name[20];

    printf("enter name ");
    scanf("%[^\n]", &name);

    printf("\n");

    printf("%s", name);
    printf("\n\n");

    printf("c\tlaguage\n");
    printf("c       laguage");
}
