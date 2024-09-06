#include <stdio.h>
main()
{
    int no;
    printf("enter no ");
    scanf("%d", &no);

    int first, last;

    first = no / 100;

    printf("%d\n", first);

    last = no / 100;

    printf("%d\n", last);

    printf("sum");
    int sum = first + last;

    printf("sum = %d",sum);
}
