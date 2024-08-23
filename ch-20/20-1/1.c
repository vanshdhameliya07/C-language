#include <stdio.h>
main()
{
    printf("int bytes :%zu\n", sizeof(int));
    printf("float bytes :%zu\n", sizeof(float));
    printf("char bytes :%lu\n", sizeof(char));

    int a[5];

    printf("\n\n");
    printf("array size :%lu\n", sizeof(a));

    char name[60];
    printf("\n\n");

    printf("string size:%lu\n", sizeof(name));

    int size = sizeof(a) / sizeof(a[0]);
                //   60   /4 = 15
    printf("string length =>%d", size);
    
}
