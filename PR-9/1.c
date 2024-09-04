#include <stdio.h>

void main()
{
    FILE *fp;

    fp = fopen("even.text ", "w");

    if (fp != "\0")
    {
        fprintf(fp, "Even numbers from even_file.txt:\n ");
        for (int i = 50; i < 70; i++)
        {
            if (i % 2 == 0)
            {

                fprintf(fp, "%d\t", i);
            }
        }
    }

    else
    {
        fprintf(fp, "file not open");
    }




    fp = fopen("odd.text ", "w");

    if (fp != "\0")
    {
        fprintf(fp, "Odd numbers from even_file.txt:\n ");
        for (int i = 50; i < 70; i++)
        {
            if (i % 2 == 1)
            {

                fprintf(fp, "%d\t", i);
            }
        }
    }

    else
    {
        fprintf(fp, "file not open");
    }
}