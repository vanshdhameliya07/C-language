#include<stdio.h>
main(){
	
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		for(k=5;k>1;k--){
			printf("  ");
		}
		
		for(j=5;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
		
	}
	
	
	
	

	
}
