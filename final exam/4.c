#include <stdio.h>
int divisible(int no)
{
    if (no % 3 == 0 && no % 5 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (divisible(number))
    {
        printf("%d is divisible by both 3 and 5.\n", number);
    }
    else
    {
        printf("%d is not divisible by both 3 and 5.\n", number);
    }
}
