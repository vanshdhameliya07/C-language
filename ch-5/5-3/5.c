#include<stdio.h>
main(){
	
	
	int a,b,choice;
	printf("enter value of a :- ");
	scanf("%d",&a);

	printf("enter value of b :- ");
	scanf("%d",&b);
	printf("sum:1  min:2  mul:3  div:4  :- ");
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		
		case 1:
			  printf("%d",a+b);
			  break;
		case 2:
			  printf("%d",a-b);
			  break;
		case 3:
			  printf("%d",a*b);
			  break;
		case 4:
			  printf("%d",a/b);
			  break;
	  
		
		default :
		      printf("enter valid number");	  	  
			  break;
			  	  	  	  
	}
	
}
