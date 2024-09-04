#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    int Chemistry;
    int Mathematics;
    int Physics;
}

main()
{
    struct Student s[5];

    int total;
    float percentage;
    for (int i = 0; i < 2; i++)
    {
        printf("enter student = %d\n\n ", i + 1);
        printf("enter roll no =");
        scanf("%d", &s[i].rollno);
        printf(" name =");
        scanf("%s", &s[i].name);
        printf("Chemistry =");
        scanf("%d", &s[i].Chemistry);
        printf("Mathematics =");
        scanf("%d", &s[i].Mathematics);
        printf("Physics =");
        scanf("%d", &s[i].Physics);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\n\n");
        total = s[i].Chemistry + s[i].Mathematics + s[i].Physics;

        percentage = (float)total / 3;

        printf("%s (%d)\n", s[i].name, s[i].rollno);

        printf("Chemistry = %d\n", s[i].Chemistry);

        printf("Mathematics = %d\n", s[i].Mathematics);

        printf("Physics = %d\n", s[i].Physics);

        printf("total = %d\n", total);
        printf("percentage = %.2f%% \n", percentage);
    }
}