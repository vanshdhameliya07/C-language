#include<stdio.h>
main(){
	
	int a,b,c,d,e,f;
	printf("enter no a :- ");
	scanf("%d",&a);
	printf("enter no b :- ");
	scanf("%d",&b);
	printf("enter no c :- ");
	scanf("%d",&c);
	printf("enter no d :- ");
	scanf("%d",&d);
	if(a>b){
		
		
	   if(a>c){
	   	
	   	if(a>d){
	   		
		 if(a>e){
		 	if(a>f){
		 		printf("a is max");
			 }
			 else{
			 	printf("f is max");
			 }
		 }
		 else{
		 	printf("e is max");
		 }
	   
	   }
	   else{
	   printf("d is max");
	   }	
	   
	  }
	  else{
	  	printf("c is max");
	  }
	  
	//else{
	
	
	  if(b>c){
	  	if(b>d){
	  		if(b>e){
	  			if(b>f){
	  				printf("b is max");
				  }
				  else{
				  	printf("f is max");
				  }
			  }
			  else{
			  	printf("e is max");
			  }
		  }
		  else{
		  	printf("d is max");
		  }
	
	}
	else{
	    printf("c is max");
	}
	
	
	if(c>d){

	  		if(c>e){
	  			if(c>f){
	  				printf("c is max");
				  }
				  else{
				  	printf("f is max");
				  }
			  }
			  else{
			  	printf("e is max");
			  }
		
		  
	
	}
	else{
	    printf("d is max");
	}
	
	if(d>e){

	  			if(d>f){
	  				printf("d is max");
				  }
				  else{
				  	printf("f is max");
				  }
			 
	}
	else{
	    printf("e is max");
	}
	
	if(e>f){

	  	printf("e is max");	
			 
	}
	else{
	    printf("f is max");
	}
	
	
	
	}
	
}
