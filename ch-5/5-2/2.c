#include<stdio.h>
main(){
	
	int a=8,b=3,c=12,d=7;

	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("a is max");
			}
			else{
				printf("d is max");
			}
		}
		else{
			printf("c is max");
		}
	}
	else{
		printf("b is max");
	}
}
