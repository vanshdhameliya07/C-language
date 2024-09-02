#include <stdio.h>
#include "function.c"
int main()
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
            printf("subtraction \t: %d", subtraction(first, second));
            break;
        case 3:
            printf("Enter the first number:");
            scanf("%d", &first);
            printf("Enter the second number:");
            scanf("%d", &second);
            printf("multiplication\t: %d", multiplication(first, second));
            break;
         case 4:
            printf("Enter the first number: ");
            scanf("%d", &first);
            printf("Enter the second number: ");
            scanf("%d", &second);
            if (second != 0)
                printf("Division: %d\n", division(first, second));
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case 5:
            printf("Enter the first number: ");
            scanf("%d", &first);
            printf("Enter the second number: ");
            scanf("%d", &second);
            if (second != 0)
                printf("Modulus: %d\n", modulas(first, second));
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;

        case 0:
              printf("exiting ...");  
              break;

        default:
            break;
        }

    } while (choice != 0);
}
