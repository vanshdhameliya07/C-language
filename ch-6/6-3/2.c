#include <stdio.h>

int main() {
    int no, i,fact = 1; 

    printf("Enter any number: ");
    scanf("%d", &no);

    for (i = 1;i<=no;i++) {
        fact = fact*i; 
    }

    printf("The factorial of %d :- %d \n",no, fact);

    return 0;
}

