#include<stdio.h>
main (){
	
	int no;
	printf("enter no :- ");
	scanf("%d",&no);
	
	if(no<0){
		printf("This number is Negative");
	}
	else if(no==0){
		printf("This number is Neutral");
	}
	else{
		printf("This number is Positive");
	}
	


}
