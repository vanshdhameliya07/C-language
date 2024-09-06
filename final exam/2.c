#include <stdio.h>

int consonant(char ch)
{

    char consonant;

    if ((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
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
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (consonant(ch))
    {
        printf("%c are consonant.\n", ch);
    }
    else
    {
        printf("%c are consonant.\n", ch);
    }
}
