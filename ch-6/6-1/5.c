#include<stdio.h>
main(){
	
	int start,end;
	printf("Enter the first number:- ");
	scanf("%d",&start);
    printf("Enter the first number:- ");
	scanf("%d",&end);

	while(start<=end){
		
		if(start % 4 == 0){
			printf("%d ",start);
			
			
		}
		start++;
		
	}

	
}
