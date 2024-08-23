#include <stdio.h>
#include "function.c"
void main()
{
    int i, choice;
    do
    {
        print();

        printf("enter your choice: ");
        scanf("%d", &choice);
        int first, second;
        switch (choice)
        {
        case 1:
            printf("Enter the first number:");
            scanf("%d", &first);
            printf("Enter the second number:");
            scanf("%d", &second);
            printf("Sum\t: %d", addition(first, second));
            break;
        case 2:
            printf("Enter the first number:");
            scanf("%d", &first);
            printf("Enter the second number:");
            scanf("%d", &second);
            printf("Sum\t: %d", subtraction(first, second));
            break;
        case 3:
            printf("Enter the first number:");
            scanf("%d", &first);
            printf("Enter the second number:");
            scanf("%d", &second);
            printf("Sum\t: %d", multiplication(first, second));
            break;
        case 4:
            printf("Enter the first number:");
            scanf("%d", &first);
            printf("Enter the second number:");
            scanf("%d", &second);
            printf("Sum\t: %d", division(first, second));
            break;

        default:
            break;
        }
    } while (choice != 0);
}
