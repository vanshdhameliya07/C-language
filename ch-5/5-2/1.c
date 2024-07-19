#include<stdio.h>
main(){
	
	int first,sec,third;
	printf("enter first no :- ");
	scanf("%d",&first);
	printf("enter sec no :- ");
	scanf("%d",&sec);
	printf("enter third no :- ");
	scanf("%d",&third);
	
	if(first>sec){
		if(first>third){
			printf("first min");
		}
		else{
			printf("third min");
		}
	}
	else{
		printf("sec min");
	}
	
}
