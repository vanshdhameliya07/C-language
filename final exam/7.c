#include <stdio.h>
main()
{
    FILE *fp;

    fp = fopen("demo.text", "w");

    fprintf(fp, "hello");

    fp = fopen("demo.text", "r");

    if (fp != "0")
    {
        printf("file is open");
    }
    else
    {
        printf("file is not open");
    }
    fclose(fp);
}