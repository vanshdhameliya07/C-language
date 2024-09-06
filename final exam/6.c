#include <stdio.h>
struct Stucture
{
    int n;
    char name[50];
    int model;
    int price;
};

main()
{
    struct Stucture mobile;

    int no;

    printf("enter number of mobile ");
    scanf("%d", &no);

    int a[no];
    for (int i = 0; i < no; i++)
    {
        printf("\n\n");
        printf("mobile name : ");
        scanf("%s", &mobile.name);
        printf("mobile model : ");
        scanf("%d", &mobile.model);
        fflush(stdin);
        printf("mobile price : ");
        scanf("%d", &mobile.price);
    }

    for (int i = 0; i < no; i++)
    {

        printf("mobile name :%s\n", mobile.name);
        printf("mobile model :%d\n", mobile.model);
        printf("mobile price  :%d\n", mobile.price);
    }
}