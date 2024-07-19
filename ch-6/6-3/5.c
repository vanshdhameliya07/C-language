#include<stdio.h>
main(){
	int i=4,no;
	printf("enter no :- ");
	scanf("%d",&no);
	
	do{
		if(i %4 ==0){
			printf("%d\n ",i);
		}
		i++;
	}
	while(i<=no);
}
