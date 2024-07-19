#include<stdio.h>
main()
{
	int i,A[50],B[50],C[50],size;
	
	printf("Enter array size:");
	scanf("%d",&size);
	
	printf("Enter array A's elements:");
	
	printf("\n");
	
	for(i=0;i<size;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&A[i]);
	
	}
	
	printf("Enter array B's elements:");
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&B[i]);
	}
	
	C[50]=A[i]+B[i];
	printf("%d",C[i]);
	
}
