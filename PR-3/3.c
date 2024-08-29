#include <stdio.h>
main()
{

	int first, last, no, sum;
	printf("enter any number :- ");
	scanf("%d", &no);

	first = no / 100;

	printf("first digit:- %d\n ", first);

	last = no % 10;

	printf("last digit :- %d", last);

	printf("\n");
	printf("\n");
	printf("sum of first and last digit %d\n", sum = last + first);
}
